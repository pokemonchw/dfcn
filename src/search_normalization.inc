#include "search_unicode_data.inc"

struct SearchNormalizedText { std::string text; std::vector<size_t> origins, ends; };
static void search_append_codepoint(std::string &text, uint32_t cp) {
    if (cp < 0x80) text += char(cp);
    else if (cp < 0x800) { text += char(0xc0 | (cp >> 6)); text += char(0x80 | (cp & 63)); }
    else if (cp < 0x10000) { text += char(0xe0 | (cp >> 12)); text += char(0x80 | ((cp >> 6) & 63)); text += char(0x80 | (cp & 63)); }
    else { text += char(0xf0 | (cp >> 18)); text += char(0x80 | ((cp >> 12) & 63)); text += char(0x80 | ((cp >> 6) & 63)); text += char(0x80 | (cp & 63)); }
}
static SearchNormalizedText search_nfkc(std::string_view source) {
    struct Character { uint32_t cp; size_t origin, end; unsigned combining; };
    std::vector<Character> decomposed, composed;
    const auto combining = [](uint32_t cp) {
        const auto found = std::lower_bound(std::begin(search_unicode_classes), std::end(search_unicode_classes), cp,
            [](const auto &entry, auto value) { return entry.cp < value; });
        return found != std::end(search_unicode_classes) && found->cp == cp ? found->value : 0;
    };
    const auto append = [&](uint32_t cp, size_t origin, size_t end) {
        const auto cls = combining(cp);
        decomposed.push_back({cp, origin, end, cls});
        // Canonical ordering never crosses a starter.
        if (cls) for (size_t at = decomposed.size() - 1; at && decomposed[at-1].combining > cls; --at)
            std::swap(decomposed[at], decomposed[at-1]);
    };
    for (size_t at = 0; at < source.size();) {
        const auto decoded = decode_utf8_at(source, at); if (!decoded) break;
        const auto cp = decoded->first;
        if (cp >= 0xac00 && cp < 0xd7a4) {
            const auto syllable = cp - 0xac00;
            append(0x1100 + syllable / 588, at, at+decoded->second); append(0x1161 + syllable % 588 / 28, at, at+decoded->second);
            if (syllable % 28) append(0x11a7 + syllable % 28, at, at+decoded->second);
        } else {
            const auto found = std::lower_bound(std::begin(search_unicode_mappings), std::end(search_unicode_mappings), cp,
                [](const auto &entry, auto value) { return entry.cp < value; });
            if (found != std::end(search_unicode_mappings) && found->cp == cp)
                for (uint32_t i = 0; i < found->count; ++i) append(search_unicode_values[found->offset+i], at, at+decoded->second);
            else append(cp, at, at+decoded->second);
        }
        at += decoded->second;
    }
    const auto compose = [](uint32_t first, uint32_t second) -> uint32_t {
        if (first >= 0x1100 && first < 0x1113 && second >= 0x1161 && second < 0x1176)
            return 0xac00 + (first-0x1100)*588 + (second-0x1161)*28;
        if (first >= 0xac00 && first < 0xd7a4 && (first-0xac00)%28 == 0 && second > 0x11a7 && second < 0x11c3)
            return first + second-0x11a7;
        const auto key = std::pair(first,second);
        const auto found = std::lower_bound(std::begin(search_unicode_compositions), std::end(search_unicode_compositions), key,
            [](const auto &entry, auto value) { return std::pair(entry.first,entry.second) < value; });
        return found != std::end(search_unicode_compositions) && found->first == first && found->second == second ? found->result : 0;
    };
    size_t starter = SIZE_MAX; unsigned previous = 0;
    for (const auto &character : decomposed) {
        const auto merged = starter != SIZE_MAX && (!previous || previous < character.combining)
            ? compose(composed[starter].cp,character.cp) : 0;
        if (merged) {
            composed[starter].cp=merged;
            composed[starter].origin=std::min(composed[starter].origin,character.origin);
            composed[starter].end=std::max(composed[starter].end,character.end);
        }
        else {
            if (!character.combining) starter = composed.size();
            composed.push_back(character); previous = character.combining;
        }
    }
    SearchNormalizedText result;
    for (auto character : composed) {
        if (character.cp >= 'A' && character.cp <= 'Z') character.cp += 32;
        const auto before = result.text.size(); search_append_codepoint(result.text,character.cp);
        result.origins.insert(result.origins.end(), result.text.size()-before, character.origin);
        result.ends.insert(result.ends.end(),result.text.size()-before,character.end);
    }
    return result;
}
struct SearchChineseEquivalences {
    struct Node { std::map<unsigned char, uint32_t> next; std::string replacement; };
    std::vector<Node> trie{1};
    void add(std::string_view from, std::string_view to) {
        if (from == to || from.empty() || to.empty()) return;
        uint32_t node = 0;
        for (const unsigned char c : from) {
            const auto found = trie[node].next.find(c);
            if (found == trie[node].next.end()) { const auto next = uint32_t(trie.size()); trie[node].next[c]=next; trie.emplace_back(); node=next; }
            else node=found->second;
        }
        // Ambiguous characters retain the first dictionary canonical form;
        // whole phrase records take precedence through longest-prefix lookup.
        if (trie[node].replacement.empty()) trie[node].replacement = to;
    }
    explicit SearchChineseEquivalences(const char *file) {
        std::ifstream input(runtime::data_path()/"opencc"/file);
        for (std::string line;std::getline(input,line);) {
            if (line.empty() || line.front()=='#') continue;
            const auto tab=line.find('\t'); if(tab==std::string::npos)continue;
            const auto source=line.substr(0,tab);
            std::istringstream variants(line.substr(tab+1));
            for(std::string variant;variants>>variant;)add(variant,source);
        }
    }
    SearchNormalizedText convert(const SearchNormalizedText &input) const {
        SearchNormalizedText output;
        for(size_t at=0;at<input.text.size();) {
            uint32_t node=0;size_t end=at;const std::string *replacement=nullptr;
            for(size_t i=at;i<input.text.size();++i) {
                const auto found=trie[node].next.find(static_cast<unsigned char>(input.text[i]));if(found==trie[node].next.end())break;
                node=found->second;if(!trie[node].replacement.empty()){replacement=&trie[node].replacement;end=i+1;}
            }
            if(replacement){
                output.text+=*replacement;
                output.origins.insert(output.origins.end(),replacement->size(),*std::min_element(input.origins.begin()+at,input.origins.begin()+end));
                output.ends.insert(output.ends.end(),replacement->size(),*std::max_element(input.ends.begin()+at,input.ends.begin()+end));at=end;
            }
            else { const auto cp=decode_utf8_at(input.text,at);const auto width=cp?cp->second:1;
                output.text.append(input.text,at,width);output.origins.insert(output.origins.end(),input.origins.begin()+at,input.origins.begin()+at+width);
                output.ends.insert(output.ends.end(),input.ends.begin()+at,input.ends.begin()+at+width);at+=width; }
        }
        return output;
    }
};
static SearchNormalizedText search_normalized_text(std::string_view source) {
    if (std::all_of(source.begin(), source.end(), [](unsigned char c) { return c < 128; })) {
        SearchNormalizedText result;
        result.text.reserve(source.size()); result.origins.reserve(source.size()+1); result.ends.reserve(source.size());
        for (size_t i=0;i<source.size();++i) {
            const auto c=source[i]; result.text+=c>='A' && c<='Z'?char(c+32):c;
            result.origins.push_back(i); result.ends.push_back(i+1);
        }
        result.origins.push_back(source.size()); return result;
    }
    struct Cache { uint64_t revision=UINT64_MAX;std::vector<SearchChineseEquivalences> dictionaries; };
    auto &cache=reloadable_thread_state<Cache,struct SearchChineseEquivalencesTag>();
    const auto revision=RULESETS.resource_revision();
    if(cache.revision!=revision){
        cache.dictionaries.clear();
        for(const auto file:{"TWVariants.txt","TWPhrasesIT.txt","TWPhrasesName.txt","TWPhrasesOther.txt","STPhrases.txt","STCharacters.txt"})cache.dictionaries.emplace_back(file);
        cache.revision=revision;
    }
    auto result=search_nfkc(source);
    for(const auto &dictionary:cache.dictionaries)result=dictionary.convert(result);
    result.origins.push_back(source.size());
    return result;
}

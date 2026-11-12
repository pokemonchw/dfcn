// Native Adventure task cards: Steam 53.16 0xaf6050..0xaf969d and
// classic 53.16 0xaf3090..0xaf66dd. The task-list constructor at 0xdf540
// (classic 0xdf4d0) supplies all 18 agreement-subject titles, seven companion
// reason titles, three order types and the optional Done prefix. Each card
// uses the pinned-active journal skin, but has exactly six rows and no log
// counter. Its last semantic field can overwrite the lower horizontal edge.
    {
        static constexpr std::pair<std::string_view, std::string_view> fixed_fields[] = {
            {"Bring", "将以下神器带回："},
            {"to", "交给："},
            {"You", "你"},
            {"asked that you", "请你"},
            {"retrieve", "取回："},
            {"requested that you", "请求你"},
            {"offer your services to", "向以下团体提供服务："},
            {"An order from", "下令者："},
            {"Finish reporting in", "完成汇报"},
            {"Agreement concluded", "协议已结束"},
            {"Complete: report back", "已完成：返回汇报"},
            {"Not yet completed", "尚未完成"},
        };
        static constexpr std::pair<std::string_view, std::string_view> bearings[] = {
            {"N", "北"}, {"NNE", "北东北"}, {"NE", "东北"}, {"ENE", "东东北"},
            {"E", "东"}, {"ESE", "东东南"}, {"SE", "东南"}, {"SSE", "南东南"},
            {"S", "南"}, {"SSW", "南西南"}, {"SW", "西南"}, {"WSW", "西西南"},
            {"W", "西"}, {"WNW", "西西北"}, {"NW", "西北"}, {"NNW", "北西北"},
            {"***", "***"},
        };
        const auto person = [&](std::string_view value) {
            value = trim_view(value);
            auto target = translate_legends_actor(value);
            if (!target) target = translate_ui_message_capture(value, true);
            if (!target) target = translate_journal_title(value, JournalSearchKind::Person);
            if (!translation_complete_with_native_nicknames(target, value) &&
                    value.size() >= 2 && value.size() <= 192 &&
                    value.find_first_of(" \t\r\n") == std::string_view::npos &&
                    !value.ends_with("...") && generated_title_shape(value))
                target = translate_english_character_name(value, value);
            return target.value_or(native_text_to_utf8(trim_view(value)));
        };
        const auto task_title = [&](std::string_view source,
                const NativeAdventureQuestTitle *native) {
            return translate_journal_agreement_title(source, native);
        };
        auto title_draws = captured_native_drawn_text_rows();
        auto upper_draws = captured_native_drawn_text_rows(true);
        title_draws.insert(title_draws.end(), std::make_move_iterator(upper_draws.begin()),
            std::make_move_iterator(upper_draws.end()));
        const auto title_epoch = captured_native_drawn_text_epoch();
#include "adventure_quest_native_fields.inc"
    }

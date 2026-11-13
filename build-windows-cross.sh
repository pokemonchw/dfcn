#!/bin/bash
# Explicit Linux -> Windows x64 build and deployment to the checkout.
set -euo pipefail

if [[ "$OSTYPE" != linux* ]]; then
    printf '%s\n' 'Windows cross-build failed: this entry point requires Linux.' >&2
    exit 1
fi

project_root="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
python="$HOME/.cache/codex-runtimes/codex-primary-runtime/dependencies/python/bin/python3"
if [[ ! -x "$python" ]]; then
    printf 'Required build executable is missing: %s\n' "$python" >&2
    exit 1
fi

# Use only the explicitly configured cross compiler and Windows SDL2 SDK.
unset CXX CXXFLAGS CPPFLAGS LDFLAGS LDLIBS PKG_CONFIG PKG_CONFIG_PATH
unset PKG_CONFIG_LIBDIR PKG_CONFIG_SYSROOT_DIR
unset GCC_EXEC_PREFIX COMPILER_PATH LIBRARY_PATH CPATH C_INCLUDE_PATH CPLUS_INCLUDE_PATH
unset PYTHONHOME PYTHONPATH
export PYTHONDONTWRITEBYTECODE=1

# The game's dfcn symlink reads DLLs from the checkout, not build/windows-x64.
# Always publish there so invoking this entry point also updates the game.
exec "$python" -B -u "$project_root/tools/build.py" --windows-cross --deploy-project "$@"

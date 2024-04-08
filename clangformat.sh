#!/bin/bash

CLANGFMT="/home/yaginuma/.local/lib/python3.10/site-packages/clang_format/data/bin/clang-format"
FILETYPE="-name *.c -o -name *.cc -o -name *.cpp -o -name *.h -o -name *.hh -o -name *.hpp"
DIRECTORY="."

#find bench include src test -name *.c -o -name *.cc -o -name *.cpp -o -name *.h -o -name *.hh -o -name *.hpp | xargs clang-format -i -style=file --verbose
find $DIRECTORY $FILETYPE | xargs $CLANGFMT -i -Werror -style=file --dry-run --verbose

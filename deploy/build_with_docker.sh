#!/bin/bash
EXTRA=""
if [[ "$1" == "clean" ]]
then
    git clean -xfd $PWD
    EXTRA="--qt-config="-no-pkg-config" --git-clean-qtbase --git-clean-qtwebkit"
fi
docker run -v $PWD:/home/  eyalrounds/phantomjs-builder:v1 python build.py --confirm --release ${EXTRA}

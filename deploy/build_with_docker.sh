#!/bin/bash
if [[ "$1" == "clean" ]]
then
    git clean -xfd $PWD
fi
docker run -v $PWD:/src  eyalrounds/phantomjs-builder:v1 'python build.py --confirm --release --qt-config="-no-pkg-config" --git-clean-qtbase --git-clean-qtwebkit'

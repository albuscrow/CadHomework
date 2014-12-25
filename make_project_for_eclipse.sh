#!/bin/sh
mkdir -p ../build
cmake -E chdir ../build cmake -G "Eclipse CDT4 - Unix Makefiles" -DCMAKE_BUILD_TYPE=debug ../cad-project

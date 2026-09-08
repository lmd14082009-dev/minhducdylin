#!/bin/bash

set -e

clang -dynamiclib \
  -o libMinhDuc.dylib \
  MinhDuc.c

echo "Build completed!"

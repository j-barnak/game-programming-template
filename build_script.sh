#!/usr/bin/sh

conan install . --install-folder build --build=missing
cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_TOOLCHAIN_FILE=build/conan_toolchain.cmake -S . -B build -GNinja

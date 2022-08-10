# Game Programming
A simple 2d game for learning purposes. We'll see what we create

## Build
You could either run the script `build_script.sh` doing the following:
```
sh ./build_script.sh
```
or you can manually build doing the following:
```
conan install . --install-folder build --build=missing
cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_TOOLCHAIN_FILE=build/conan_toolchain.cmake -S . -B build -GNinja
```

## Todo
- Utilize RAII with the Game class
- Create a move versatile shell script

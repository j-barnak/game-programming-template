# Game Programming
A simple 2d game for learning purposes. We'll see what we create

## Build
You could either run the script `build_script.sh` doing the following:
```
sh ./build_script.sh
```
or you can manually build doing the following:
```
mkdir build
cd build
conan install ..
cmake .. -GNinja
ninja
./game
```

## Todo
- Utilize RAII with the Game class
- Create a move versatile shell script

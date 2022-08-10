#include "inc/Game.hpp"

Game::Game() {
    if (!SDL_Init(SDL_INIT_EVERYTHING)) {
        std::cerr << "Error initializing SDL\n"; 
    }

    std::cout << "Properly initialized\n";
}

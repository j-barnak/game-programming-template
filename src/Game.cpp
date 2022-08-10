#include "inc/Game.hpp"

Game::Game() {
    if (SDL_Init(SDL_INIT_EVERYTHING != 0)) {
        std::cerr << "Error initializing SDL: " << SDL_GetError() << "\n"; 
    }

    else {
        std::cout << "Properly initialized\n";
    }
}

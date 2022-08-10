#include "inc/Game.hpp"

Game::Game() {
    if (SDL_Init(SDL_INIT_EVERYTHING != 0)) {
        std::cerr << "Error initializing SDL: " << SDL_GetError() << "\n"; 
    }

    SDL_Window* window = SDL_CreateWindow(nullptr, 
                                          SDL_WINDOWPOS_CENTERED, 
                                          SDL_WINDOWPOS_CENTERED,
                                          800, 600,
                                          SDL_WINDOW_BORDERLESS);
    if (!window) {
        std::cerr << "Error Creating Window: " << SDL_GetError() << "\n"; 
    }

    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
    if (!renderer) {
        std::cerr << "Error Rendering Window: " << SDL_GetError() << "\n"; 
    }
    
}

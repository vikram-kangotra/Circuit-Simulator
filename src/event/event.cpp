// Copyright (C) 2023 by Vikram Kangotra
// This file is part of Circuit-Simulator.

#include "event.h"
#include <SDL2/SDL.h>

namespace Event {

    namespace  {
        SDL_Event event;
    }

    SDL_Event& pollEvent() {
        SDL_PollEvent(&event);
        return event;
    }

    SDL_Event& getEvent() {
        return event;
    }
}

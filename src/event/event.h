// Copyright (C) 2023 by Vikram Kangotra
// This file is part of Circuit-Simulator.k

#pragma once

#include <SDL2/SDL.h>

namespace Event {

    SDL_Event& pollEvent();

    SDL_Event& getEvent();
}

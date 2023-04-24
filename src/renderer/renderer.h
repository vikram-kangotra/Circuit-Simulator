// Copyright (C) 2023 by Vikram Kangotra
// This file is part of Circuit-Simulator.

#pragma once

#include <SDL2/SDL.h>
#include "color.h"

class Renderer {
    public:
        Renderer(SDL_Window* window);
        ~Renderer();

        void clear();
        void present();
        void setDrawColor(const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t a);
        void setDrawColor(const Color& color);

        SDL_Renderer* getRendererHandle() const { return m_renderer; }

    private:
        SDL_Renderer* m_renderer;
};

// Copyright (C) 2023 by Vikram Kangotra
// This file is part of Circuit-Simulator.

#pragma once

#include <cstdint>
#include <SDL2/SDL.h>


class Window {
    public:
        Window(const uint16_t width, const uint16_t height);
        ~Window();

        uint16_t getWidth() const { return m_width; }
        uint16_t getHeight() const { return m_height; }

        SDL_Window* getWindowHandle() const { return m_window; }

    private:
        uint16_t m_width;
        uint16_t m_height;

        SDL_Window* m_window;
};

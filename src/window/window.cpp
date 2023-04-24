// Copyright (C) 2023 by Vikram Kangotra
// This file is part of Circuit-Simulator.

#include "window.h"

Window::Window(const uint16_t width, const uint16_t height) : m_width(width), m_height(height) {

    m_window = SDL_CreateWindow("SDL2 Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, m_width, m_height, SDL_WINDOW_SHOWN);

    if (m_window == nullptr) {
        SDL_Log("Unable to create window: %s", SDL_GetError());
        exit(1);
    }
}

Window::~Window() {
    SDL_DestroyWindow(m_window);
}

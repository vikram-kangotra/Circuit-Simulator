// Copyright (C) 2023 by Vikram Kangotra
// This file is part of Circuit-Simulator.

#include "renderer.h"

Renderer::Renderer(SDL_Window* window) {
    m_renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

    if (m_renderer == nullptr) {
        SDL_Log("Unable to create renderer: %s", SDL_GetError());
        exit(1);
    }
}

Renderer::~Renderer() {
    SDL_DestroyRenderer(m_renderer);
}

void Renderer::clear() {
    SDL_RenderClear(m_renderer);
}

void Renderer::present() {
    SDL_RenderPresent(m_renderer);
}

void Renderer::setDrawColor(const uint8_t r, const uint8_t g, const uint8_t b, const uint8_t a) {
    SDL_SetRenderDrawColor(m_renderer, r, g, b, a);
}

void Renderer::setDrawColor(const Color& color) {
    SDL_SetRenderDrawColor(m_renderer, color.r, color.g, color.b, color.a);
}

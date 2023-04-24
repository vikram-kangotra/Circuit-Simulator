// Copyright (C) 2023 by Vikram Kangotra
// This file is part of Circuit-Simulator.

#pragma once

#include "shape.h"

class Rectangle : public ShapeFill {
    public:
        Rectangle(Renderer& renderer, const uint16_t x, const uint16_t y, const uint16_t width, const uint16_t height)
        : ShapeFill(renderer), x(x), y(y), width(width), height(height) {}

        void draw() override {
            SDL_Rect rect = { x, y, width, height };
            SDL_RenderDrawRect(renderer.getRendererHandle(), &rect);
        }

        void fill() override {
            SDL_Rect rect = { x, y, width, height };
            SDL_RenderFillRect(renderer.getRendererHandle(), &rect);
        }

        void setWidth(const uint16_t width) {
            this->width = width;
        }

        void setHeight(const uint16_t height) {
            this->height = height;
        }

    private:
        uint16_t x;
        uint16_t y;
        uint16_t width;
        uint16_t height;
};

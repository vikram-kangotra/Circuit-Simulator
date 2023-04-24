// Copyright (C) 2023 by Vikram Kangotra
// This file is part of Circuit-Simulator.

#pragma once

#include "shape.h"

class Point : public Shape {
    public:
        Point(Renderer& renderer, const uint16_t x, const uint16_t y) : Shape(renderer), x(x), y(y) {}

        void draw() override {
            SDL_RenderDrawPoint(renderer.getRendererHandle(), x, y);
        }

    private:
        uint16_t x;
        uint16_t y;
};

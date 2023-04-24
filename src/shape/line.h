// Copyright (C) 2023 by Vikram Kangotra
// This file is part of Circuit-Simulator.

#pragma once

#include "shape.h"
#include <cstdint>

class Line : public Shape {
    public:
        Line(Renderer& renderer, const uint16_t x1, const uint16_t y1, const uint16_t x2, const uint16_t y2)
        : Shape(renderer), x1(x1), y1(y1), x2(x2), y2(y2) {}

        void draw() override {
            SDL_RenderDrawLine(renderer.getRendererHandle(), x1, y1, x2, y2);
        }

    private:
        uint16_t x1;
        uint16_t x2;
        uint16_t y1;
        uint16_t y2;
};

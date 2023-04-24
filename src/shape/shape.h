// Copyright (C) 2023 by Vikram Kangotra
// This file is part of Circuit-Simulator.

#pragma once

#include "../renderer/renderer.h"

class Shape {
    public:
        Shape(Renderer& renderer) : renderer(renderer) {}

        virtual void draw() = 0;

    protected:
        Renderer& renderer;
};

class ShapeFill : public Shape {
    public:
        ShapeFill(Renderer& renderer) : Shape(renderer) {}

        virtual void fill() = 0;
};

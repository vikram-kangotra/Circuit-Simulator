// Copyright (C) 2023 by Vikram Kangotra
// This file is part of Circuit-Simulator.

#include <SDL2/SDL.h>
#include "window/window.h"
#include "renderer/renderer.h"
#include "shape/rectangle.h"
#include "event/event.h"

int main() {

    SDL_Init(SDL_INIT_VIDEO);

    Window window(1280, 720);
    Renderer renderer(window.getWindowHandle());

    Rectangle rectangle(renderer, 640, 360, 100, 100);

    while (true) {

        if (Event::pollEvent().type == SDL_QUIT) {
            break;
        }
        
        renderer.setDrawColor(Color::WHITE);
        renderer.clear();

        renderer.setDrawColor(Color::RED_600);
        rectangle.fill();

        rectangle.setWidth(sin(SDL_GetTicks() / 1000.0) * 100 + 100);
        rectangle.setHeight(sin(SDL_GetTicks() / 1000.0) * 100 + 100);

        renderer.present();
    }

    SDL_Quit();

    return 0;
}

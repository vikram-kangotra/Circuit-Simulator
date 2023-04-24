# Copyright (C) 2023 by Vikram Kangotra
# This file is part of Circuit-Simulator.

CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -Werror -pedantic -O3 -lSDL2

SRC_DIR = src
BUILD_DIR = build

SRC = $(wildcard src/main.cpp $(SRC_DIR)/*/*.cpp)
OBJ = $(SRC:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

.PHONY: all clean

all: $(OBJ)
	$(CXX) -o $(BUILD_DIR)/circuit-simulator $^ $(CXXFLAGS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(@D)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

clean:
	rm -rf $(BUILD_DIR)

# Copyright (C) 2023 by Vikram Kangotra
# This file is part of Circuit-Simulator.

CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -Werror -pedantic -O3

BUILD_DIR = build

SRC = $(wildcard src/main.cpp src/*/*.cpp)
OBJ = $(SRC:src/%.cpp=$(BUILD_DIR)/%.o)

.PHONY: all clean

all: $(OBJ)
	$(CXX) -o circuit-simulator $^ $(CXXFLAGS)

$(BUILD_DIR)/%.o: src/%.cpp
	@mkdir -p $(@D)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

clean:
	rm -rf $(BUILD_DIR)

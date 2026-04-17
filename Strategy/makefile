CXX := g++
CXXFLAGS := -std=c++20 -Wall -DSFML_STATIC

SFML_INCLUDE := "C:/Program Files (x86)/SFML/include"
SFML_LIB := "C:/Program Files (x86)/SFML/lib"

SRC_DIR := src
INCLUDE_DIR := include
BUILD_DIR := build
BIN_DIR := bin

SOURCES := $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS := $(SOURCES:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)
TARGET := $(BIN_DIR)/app.exe

INCLUDES := -I$(SFML_INCLUDE) -I$(INCLUDE_DIR)

LIBS := -L$(SFML_LIB) \
        -lsfml-graphics-s \
        -lsfml-window-s \
        -lsfml-system-s \
        -lfreetype \
        -lharfbuzz \
        -lz \
        -lopengl32 \
        -lwinmm \
        -lgdi32 \
        -lws2_32 \
        -lkernel32 \
        -luser32 \
        -lshell32 \
        -ladvapi32 \
        -lole32 \
        -loleaut32 \
        -limm32 \
        -lversion \
        -lsetupapi

all: dirs $(TARGET)

dirs:
	@if not exist $(BUILD_DIR) mkdir $(BUILD_DIR)
	@if not exist $(BIN_DIR) mkdir $(BIN_DIR)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@ $(LIBS) -static-libgcc -static-libstdc++

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@if exist $(BUILD_DIR) rmdir /s /q $(BUILD_DIR)
	@if exist $(BIN_DIR) rmdir /s /q $(BIN_DIR)

run: $(TARGET)
	@$(TARGET)

rebuild: clean all

.PHONY: all clean run rebuild dirs

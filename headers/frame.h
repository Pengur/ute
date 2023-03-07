#pragma once

#include "renderer.h"
#include "buffer.h"
#include "renderer.h"

// Prevent circular dependency
class Renderer {};

#include <vector>
#include <string>

class Frame {
public:
    int width;
    int height;
    Renderer* renderer;

    std::vector<std::vector<Buffer*>> content;

    virtual void focus();
    virtual void loadBuffer(std::string path);
    virtual void loadBuffer();
    void update();
};

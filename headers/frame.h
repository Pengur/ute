#pragma once

#include "renderer.h"
#include "buffer.h"

#include <vector>
#include <string>

class Frame {
public:
    int width;
    int height;

    std::vector<std::vector<Buffer*>> content;

    virtual void focus();
    virtual void loadBuffer(std::string path);
    virtual void loadBuffer();
    void update();
};

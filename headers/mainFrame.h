#pragma once

#include "frame.h"
#include "renderer.h"

class MainFrame{
public:
    std::vector<Frame*> frames;
    Renderer* renderer

    void adoptFrame();
}

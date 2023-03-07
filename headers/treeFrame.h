#pragma once

#include "frame.h"

#include <string>

class TreeFrame : public Frame {
public:
    void focus() override;
    void loadBuffer() override;
};

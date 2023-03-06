#pragma once

#include "colors.h"

class Buffer {
public:
    char data;
    short color;

    Buffer(char data, short color);
};

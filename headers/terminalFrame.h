#pragma once

#include "frame.h"

class TerminalFrame : public Frame {
public:
    void focus() override;
};
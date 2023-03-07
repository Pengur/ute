#pragma once

#include "frame.h"

class TerminalFrame : public Frame {
public:
    std::string command;
    void executeCommand();
    void focus() override;
};

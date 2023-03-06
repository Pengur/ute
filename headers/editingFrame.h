#pramga once

#include "frame.h"

class EditingFrame : public Frame {
public
    void focus() override;
    void loadBuffer() override;
    void update() override;
    void saveBuffer();
};

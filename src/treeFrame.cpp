#include "treeFrame.h"
#include "buffer.h"

#include <filesystem>

void TreeFrame::loadBuffer() {
    // Load direcotry content into buffer
    std::filesystem::path path = std::filesystem::current_path();
    std::vector<Buffer*> bufferLine;
    for(auto &p : std::filesystem::directory_iterator(path)) {
        std::string fileName = p.path().filename().string();
        for (int i = 0; i < fileName.length(); i++) {
            bufferLine.push_back(new Buffer(fileName[i]));
        }
        content.push_back(bufferLine);
    }
}

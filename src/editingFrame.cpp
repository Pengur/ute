#include "editingFrame.h"

#include <fstream>
#include <string>

void EditingFrame::loadBuffer(std::string fileName) {
    std::ifstream file(fileName);
    std::string line;
    std::vector<Buffer*> bufferLine;
    while (std::getline(file, line)) {
        for (int i = 0; i < line.length(); i++) {
            bufferLine.push_back(new Buffer(line[i]));
        }
        content.push_back(bufferLine);
    }
}

// TODO: check functionality, written by copilot
void EditingFrame::saveBuffer(std::string fileName) {
    std::ofstream file(fileName);
    for (int i = 0; i < content.size(); i++) {
        for (int j = 0; j < content[i].size(); j++) {
            file << content[i][j]->data;
        }
        file << std::endl;
    }
}

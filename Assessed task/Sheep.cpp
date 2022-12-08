#include "Sheep.h"
#include <iostream>

Sheep::~Sheep() {
    std::cout << "Sheep Destroyed" << std::endl;
}
void Sheep :: speak(void) {
    std::cout << "Sheep says: \t\tbaa!" << std::endl;
}
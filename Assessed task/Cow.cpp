#include "Cow.h"
#include <iostream>

Cow::~Cow() {
    std::cout << "Cow Destroyed" << std::endl;
}
void Cow :: speak(void) {
    std::cout << "Cow says: \t\tmoo!" << std::endl;
}

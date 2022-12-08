#include "Frisian.h"
#include <iostream>

Frisian ::~Frisian() {
    std::cout << "Frisian Destroyed" << std::endl;
}
void Frisian::speak(void) {
    std::cout << "Frisian Cow says: \tmoo (in black and white)!" << std::endl;
}
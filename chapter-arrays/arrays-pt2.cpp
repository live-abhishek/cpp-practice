#include <iostream>

namespace Animals {
    enum Animals {
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake
    };
}

int main() {
    int legs[] {2, 4, 4, 4, 2, 0};
    std::cout << "Elephant has " << legs[Animals::elephant] << " legs" << std::endl;
    return 0;
}
#include <iostream>
#include <bitset>

int main() {
    std::bitset<4> x {0b1100};

    std::cout << x << "\n";
    std::cout << (x >> 1) << "\n";
    std::cout << (x << 1) << "\n";

    std::cout << std::bitset<4>(~0b1000u) << ' ' << std::bitset<8>(~0b0100u);

    std::cout << (std::bitset<4>(0b0101) | std::bitset<4>(0b0110)); // prints 0111
    std::cout << (std::bitset<4>(0b0111) | std::bitset<4>(0b0011) | std::bitset<4>(0b0001)); // prints 0111

    std::cout << (std::bitset<4>(0b0101) & (std::bitset<4>(0b0110))); // prints 0100
    std::cout << (std::bitset<4>(0001) & std::bitset<4>(0011) & std::bitset<4>(0111)); // prints 0001

    
    return 0;
}
#include <iostream>
#include <bitset>

std::bitset<4> rotlUsingFunctions(std::bitset<4> bits) {
    bool leftBit = bits.test(3);
    bits = bits << 1;
    if (leftBit) {
        bits.set(0);
    }
    return bits;
}

std::bitset<4> rotlCustom(std::bitset<4> bits) {
    return (bits << 1) | (bits >> 3);
}

std::bitset<4> rotl(std::bitset<4> bits) {
    // return rotlUsingFunctions(bits);
    return rotlCustom(bits);
}

int main() {
    std::bitset<4> bits1{0b0001};
    std::cout << rotl(bits1) << "\n"; // should print 0010

    std::bitset<4> bits2{0b1001};
    std::cout << rotl(bits2) << "\n"; // should print 0011

    return 0;
}
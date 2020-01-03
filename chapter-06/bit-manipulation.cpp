#include <iostream>
#include <cstdint>

int main() {
    constexpr std::uint_fast8_t mask0{ 1 << 0 }; // 0000 0001
    constexpr std::uint_fast8_t mask1{ 1 << 0 }; // 0000 0010
    constexpr std::uint_fast8_t mask2{ 1 << 0 }; // 0000 0100
    constexpr std::uint_fast8_t mask3{ 1 << 0 }; // 0000 1000
    constexpr std::uint_fast8_t mask4{ 1 << 0 }; // 0001 0000
    constexpr std::uint_fast8_t mask5{ 1 << 0 }; // 0010 0000
    constexpr std::uint_fast8_t mask6{ 1 << 0 }; // 0100 0000
    constexpr std::uint_fast8_t mask7{ 1 << 0 }; // 1000 0000

    std::uint_fast8_t flags{ 0b0000'0101}; // 8 bits in size means room for 8 flags

    // Testing a bit
    std::cout << "bit 0 is " << ((flags & mask0) ? "on\n" : "off\n");
    std::cout << "bit 1 is " << ((flags & mask1) ? "on\n" : "off\n");

    std::cout << "bit 1 is " << ((flags & mask1) ? "on\n" : "off\n");
    flags |= mask1;
    std::cout << "bit 1 is " << ((flags & mask1) ? "on\n" : "off\n");
    
    // re-assigning value for subsequent examples
    flags = 0b0000'0101;

    // Resetting a bit (explicity setting to zero)
    std::cout << "bit 2 is " << ((flags & mask2) ? "on\n" : "off\n");
    flags &= ~mask2;
    std::cout << "bit 2 is " << ((flags & mask2) ? "on\n" : "off\n");
    
    // re-assigning value for subsequent examples
    flags = 0b0000'0101;

    // flipping a bit
    std::cout << "bit 2 is " << ((flags & mask2) ? "on\n" : "off\n");
    flags ^= mask2; // flip bit 2
    std::cout << "bit 2 is " << ((flags & mask2) ? "on\n" : "off\n");

    

}
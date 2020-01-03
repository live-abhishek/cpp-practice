#include <iostream>
#include <cstdint>

int main() {
    std::cout << "Enter number between 0 & 255:";
    uint num;
    std::cin >> num;
    std::string s = "";
    for(int i = 0; i < 8; ++i) {
        s.append((num % 2) + "");
        num /= 2;
    }
    s.reserve();
    std::cout << s;

    return 0;
}
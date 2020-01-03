#include <iostream>
#include <cmath>

bool isEven(int i) {
    return (i % 2) == 0;
}

int main() {
    std::cout << "Enter a number: ";
    int i;
    std::cin >> i;
    if (isEven(i)) {
        std::cout << i << " is Even";
    } else {
        std::cout << i << " is Odd";
    }
    std::cout << "\n";
}
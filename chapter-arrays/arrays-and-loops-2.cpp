#include <iostream>

int main() {
    int number {};
    do {
        std::cout << "Enter a number between 1 and 9:";
        std::cin >> number;
        if(std::cin.fail()) {
            std::cin.clear();
        }
        std::cin.ignore(32767, '\n');
    } while (number < 1 || number > 9);
    
    int array[] { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    int arrSize { sizeof(array) / sizeof(array[0]) };

    for(int i{0}; i < arrSize; ++i) {
        if(array[i] == number) {
            std::cout << "The number " << number << " has index " << i << "\n";
            break;
        }
    }
    
    return 0;
}
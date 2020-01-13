#include <iostream>

int main() {
    int array[] { 4, 6, 7, 3, 8, 2, 1, 9, 5 };
    int arrSize { sizeof(array) / sizeof(array[0]) };
    for( int i = 0; i < arrSize; ++i) {
        std::cout << array[i] << std::endl;
    }
    return 0;
}
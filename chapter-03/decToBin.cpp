#include <iostream>

int printBit(int num, int powerOf2){
    if(num >= powerOf2){
        num -= powerOf2;
        std::cout << "1";
    } else {
        std::cout << "0";
    }
    return num;
}

void printBinary(int num){
    num = printBit(num, 128);
    num = printBit(num, 64);
    num = printBit(num, 32);
    num = printBit(num, 16);
    std::cout << " ";
    num = printBit(num, 8);
    num = printBit(num, 4);
    num = printBit(num, 2);
    num = printBit(num, 1);
}

int main(){
    std::cout << "Enter a number: ";
    int num;
    std::cin >> num;
    printBinary(num);
}
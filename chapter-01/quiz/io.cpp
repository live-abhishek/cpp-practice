#include <iostream>

int readNumber(){
    std::cout << "Enter a number: ";
    int num = 0;
    std::cin >> num;
    return num;
}

void writeAnswer(int num){
    std::cout << "The answer is: " << num << std::endl;
}

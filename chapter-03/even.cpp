#include <iostream>

bool isEven(int num){
    return (num % 2) == 0;
}

int readNum(){
    std::cout << "Enter a number: ";
    int num;
    std::cin >> num;
    return num;
}

int main(){
    int num = readNum();
    if(isEven(num)){
        std::cout << num << " is Even.\n";
    } else {
        std::cout << num << " is Odd.\n";
    }
    return 0;
}
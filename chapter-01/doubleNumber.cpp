#include <iostream>

int doubleNumber(int a){
    return 2*a;
}

int main(){
    std::cout << "Enter a number: ";
    int a;
    std::cin >> a;
    std::cout << doubleNumber(a) << std::endl;
    return 0;
}
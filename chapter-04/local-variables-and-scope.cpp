#include <iostream>

int getNum(){
    std::cout << "Enter a number: ";
    int num;
    std::cin >> num;
    return num;
}

int main(){
    int num1 = getNum();
    int num2 = getNum();
    std::cout << "Swapping the values\n";
    if(num1 > num2){
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    std::cout << "The smaller value is: " << num1 << "\n";
    std::cout << "The larger value is: " << num2;
}
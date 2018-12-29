#include <iostream>

double readDouble(){
    std::cout << "Enter a float number: ";
    double num;
    std::cin >> num;
    return num;
}

char readSymbol(){
    std::cout << "Enter Symbol: ";
    char c;
    std::cin >> c;
    return c;
}

int main(){
    const double num1 = readDouble();
    const double num2 = readDouble();
    const char op = readSymbol();
    double ans = 0;
    if(op == '+'){
        ans = num1 + num2;
    } else if(op == '-'){
        ans = num1 - num2;
    } else if(op == '*'){
        ans = num1 * num2;
    } else if(op == '/'){
        ans = num1 / num2;
    } else {
        std::cout << "Unknown operator. Exiting application";
        return 0;
    }
    std::cout << num1 << " " << op << " " << num2 << " is " << ans << '\n';
}
#include <iostream>
#include <string>

std::string getName(){
    std::cout << "Enter your full name: ";
    std::string name;
    std::getline(std::cin, name);
    return name;
}

int getAge(){
    std::cout << "Enter your age: ";
    int age;
    std::cin >> age;
    std::cin.ignore(32767, '\n');
    return age;
}

int main(){
    std::string name = getName();
    int age = getAge();
    std::cout << "You've lived " << static_cast<double>(age)/name.length() 
        << " years for each letter in your name.\n";
    return 0;
}
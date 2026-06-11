//input and display student name and age

#include <iostream>

int main() {
    char name[50];
    int age;

    std::cout << "Enter your name: ";
    
    std::cin >> name;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Name = " << name << '\n';
    std::cout << "Age = " << age;

    return 0;
}
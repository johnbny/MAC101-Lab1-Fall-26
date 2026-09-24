#include <iostream>
#include <string>

int main() 
{
    std::string name;
    std::cout << "What is your name? ";
    std::cin >> name;
    std::cout << "Hello, " << name << "! Pleasure to meet you!" << std::endl;
    float gpa;
    std::cout << "What is your GPA? ";
    std::cin >> gpa;
    std::cout << "Your GPA is " << gpa << "." << std::endl;
    std::string major;
    std::cout << "What is your major? ";
    std::cin.ignore();
    std::getline(std::cin, major);
    std::cout << "Your major is " << major << ". Good luck!" << std::endl;
    return 0;
}

// Start Here

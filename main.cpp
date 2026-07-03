#include <iostream>
#include <string>

int main()
{
    std::cout << "Welcome to the C++ Calculator!" << std::endl;
    std::cout << "What is your name? ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl;
    return 0;
}
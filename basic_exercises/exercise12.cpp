#include <iostream>


int main(int argc, char const *argv[])
{   

    int first = 0;
    int second = 0;
    std::cout << "---------------------------------\n";
    std::cout << "Enter first number ";
    std::cin >> first;
    std::cout << "Enter second number ";
    std::cin >> second;

    std::cout << "The sum of the numbers is: " << first + second;

    return 0;
}

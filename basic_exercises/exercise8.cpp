#include <iostream>
#include <limits>

int main(int argc, char const *argv[])
{
    int int_max = std::numeric_limits<int>::max();
    int int_min = std::numeric_limits<int>::min();
    std::cout << "Range of int is [" << int_min << ", " << int_max << "]\n";
    std::cout << "Overflow the integer range and set in minimum range : "<< int_max <<"\n";
    std::cout << "Increasing from its minimum range : "<< int_max + 1 <<"\n";
    std::cout << "Product is : "<< int_max*int_max <<"\n";
    std::cout << "Underflow the range and set in maximum range : "<< int_min <<"\n";
    std::cout << "Decreasing from its maximum range : "<< int_min - 1 <<"\n";
    std::cout << "Product is : "<< int_min * int_min <<"\n";

    return 0;
}

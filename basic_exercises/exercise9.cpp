#include <iostream>


int main(int argc, char const *argv[])
{
    int num = 57;
    std::cout << "------------------------------\n";
    std::cout << "The number is : " << num << "\n";
    num++;
    std::cout << "After post increment by 1 the number is : " << num << "\n";
    ++num;
    std::cout << "After pre increment by 1 the number is : " << num << "\n";
    num = num + 1;
    std::cout << "After increasing by 1 the number is : " << num << "\n";
    num--;
    std::cout << "After post decrement by 1 the number is : " << num << "\n";
    --num;
    std::cout << "After pre decrement by 1 the number is : " << num << "\n";
    num = num - 1;
    std::cout << "After decreasing by 1 the number is : " << num << "\n";
    
    return 0;
}

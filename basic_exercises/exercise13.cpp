#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int first = 0;
    int second = 0;
    int temp = 0;

    cout << "---------------------"  << endl;
    cout << "Enter first number ";
    cin  >> first;
    
    cout << "Enter second number ";
    cin >> second;

    temp = first;
    first = second;
    second = temp;

    cout << "After swapping the 1st number is: " << first << endl;
    cout << "After swapping the 2nd number is: " << second;

    return 0;
}

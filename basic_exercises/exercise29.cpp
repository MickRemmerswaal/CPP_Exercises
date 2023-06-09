#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    float a = 0.0f;
    float b = 0.0f;

    cout << "-------------------------------------" << endl;
    cout << "Input the dividend: ";
    cin >> a;
    cout << "Input the divisor: ";
    cin >> b;

    int quotient = a / b;
    int remainder = a - (quotient * b);

    cout << "The quotient of the division is: " << quotient << endl;
    cout << "The remainder of the division is: " << remainder << endl;
    return 0;
}

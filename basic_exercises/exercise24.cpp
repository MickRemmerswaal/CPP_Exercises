#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    float kelvin = 0.0f;
    cout << "---------------------------------------------------" << endl;
    cout << "Input the temperature in Kelvin: ";
    cin >> kelvin;


    float fahrenheit = 9*(kelvin - 273.15)/5  + 32 ;
    cout << "The temperature in Fahrenheit: " << fahrenheit;
    return 0;
}

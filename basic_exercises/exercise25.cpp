#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{    
    float kelvin = 0.0f;
    cout << "---------------------------------------------------" << endl;
    cout << "Input the temperature in Kelvin: ";
    cin >> kelvin;


    float celsius = kelvin - 273.15;
    cout << "The temperature in Celsius: " << celsius;
    return 0;
}
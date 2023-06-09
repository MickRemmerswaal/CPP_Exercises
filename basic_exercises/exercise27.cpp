#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    float celsius = 0.0f;
    cout << "---------------------------------------------------" << endl;
    cout << "Input the temperature in Celsius: ";
    cin >> celsius;

    float kelvin = celsius + 273.15;
    cout << "The temperature in Kelvin: " << kelvin;
    return 0;
}

#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    float fahrenheit = 0.0f;
    cout << "---------------------------------------------------" << endl;
    cout << "Input the temperature in Fahrenheit: ";
    cin >> fahrenheit;
    float celsius = (5*(fahrenheit - 32))/9.0;
    cout << "The temperature in Celsius: " << celsius;
    
    return 0;
}

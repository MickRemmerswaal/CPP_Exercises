#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    float celsius = 0;
    cout << "---------------------------------------------------" << endl;
    cout << "Input the temperature in Celsius :";
    cin >> celsius;
    float fahrenheit = (9.0 * celsius)/5.0 + 32;

    cout << "The temperature in Fahrenheit: " << fahrenheit;
    return 0;
}

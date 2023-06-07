#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int radius = 0;
    int height = 0;

    cout << "---------------------------------" << endl;
    cout << "Enter hight of cylinder: ";
    cin >> height;
    cout << "Enter radius of cylinder: ";
    cin >> radius;

    double volumeCylinder = M_PI * height * pow(radius, 2);

    cout << "Volume of cylinder with h = " 
            << height << " and r = " << radius << " is: " << volumeCylinder;
    return 0;
}

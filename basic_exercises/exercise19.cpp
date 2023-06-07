#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    float radius = 0;
    cout << "----------------------------------------------------" << endl;
    cout << "Input the radius(1/2 of diameter) of a circle: ";
    cin >> radius;

    float area = M_PI * pow(radius, 2);
    float circumference = 2 * M_PI * radius;

    cout << "The area of the circle is: " << area << endl;
    cout << "The circumference of the circle is: " << circumference;

    return 0;
}

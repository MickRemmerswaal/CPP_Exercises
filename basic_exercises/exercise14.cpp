#include <iostream>
#include <cmath>

using namespace std;


int main(int argc, char const *argv[])
{
    int radius = 0;
    cout << "-------------------------------" <<  endl;
    cout << "Input the radius of a sphere: ";
    cin >> radius;

    float sphereVolume = (4 * M_PI * pow(radius, 3))/3;

    cout << "The volume of the sphere with radius " << radius << " is " << sphereVolume;
    return 0;
}

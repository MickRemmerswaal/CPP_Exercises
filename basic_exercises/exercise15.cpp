#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    int length = 0;
    cout << "--------------------" << endl;
    cout << "Enter length of a cube side: ";
    cin >> length;

    float cubeVolume = pow(length, 3);

    cout << "Volume of the cube with side length " << length << " is " << cubeVolume;
    return 0;
}

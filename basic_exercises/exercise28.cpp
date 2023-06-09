#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    float a = 0.0f;
    float b = 0.0f;
    float gamma = 0.0f;
    cout << "----------------------------------------" << endl;
    cout << "Input the length of a side of the triangle: ";
    cin >> a;
    cout << "Input the length of another side of the triangle: ";
    cin >> b;
    cout << "Input the angle between these sides of the triangle: ";
    cin >> gamma;

    float area = a * b * (0.5*sin(gamma));
    cout << "The area of the Scalene Triangle is: " << area;

    return 0;
}

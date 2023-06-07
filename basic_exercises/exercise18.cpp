#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    float a = 0;
    float b = 0;
    float c = 0;

    cout << "----------------------------------------------------------" << endl;
    cout << "Input the length of 1st side of the triangle: ";
    cin >> a;
    cout << "Input the length of 2nd side of the triangle: ";
    cin >> b;
    cout << "Input the length of 3rd side of the triangle: ";
    cin >> c;

    float s = (a + b + c)/2;    
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    
    cout << "The area of the triangle is: " << area; 
    return 0;
}

#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int length = 0;
    int width = 0;

    cout << "-------------------------------" << endl;
    cout << "Input the length of the rectangle: ";
    cin >> length;
    cout << "Input the width of the rectangle: ";
    cin >> width;

    int area = length * width;
    int perimeter = 2*length + 2*width;

    cout << "The area of the rectangle is: " << area << endl;
    cout << "The perimeter of the rectangle is: " << perimeter; 
    return 0;
}

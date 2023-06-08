#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    float a = 0.0f;
    float b = 0.0f;
    float c = 0.0f;

    cout << "-----------------------------------------" << endl;
    cout << "Input the 1st angle of the triangle: ";
    cin >> a;
    cout << "Input the 2nd angle of the triangle: ";
    cin >> b;
    
    c = 180 - (a+b);
    if (c < 1){
        cout << "Angles are too big." << endl;
    }
    else {
        cout << "The 3rd of the triangle is: " << c;
    }
    
    return 0;
}

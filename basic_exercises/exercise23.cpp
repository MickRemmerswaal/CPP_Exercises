#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    float kmph = 0.0f;
    cout << "----------------------------------------------------" << endl;
    cout << "Input the distance in kilometer: ";
    cin >> kmph;

    float mph = kmph * 0.62137;
    cout << "The " << kmph << " Km./hr. converts to " << mph << " Miles/hr.";
    return 0;
}

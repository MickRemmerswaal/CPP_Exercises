#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float a;
    float b;
    float c;
    float d;
    cout << "Input four numbers (separated by space): ";
    cin >> a >> b >> c >> d;

    float total = a + b + c + d;    
    cout << "The total of four numbers is: " << total << endl;

    float average = total / 4.0;
    cout << "The average of four numbers is: " << average << endl;
    return 0;
}

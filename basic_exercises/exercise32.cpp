#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 0;
    cout << "Enter a number: ";
    cin >> a;
    if (a != 0)
    {
        if (a > 0)
        {
            cout << "The entered number is positive" << endl;
            return 0;
        }
        cout << "The entered number is negative" << endl;
        return 0;
    }
    cout << "The entered number is zero" << endl;
    return 0;
}

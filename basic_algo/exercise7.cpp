#include <iostream>

using namespace std;


string swapFirstLast (string a){
    
    if(a.length() < 2){
        return a;
    }
    char x = a[0];
    char y = a[a.length() -1];

    a[0] = y;
    a[a.length() -1] = x;
    return a;

}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;

    cout << "abcd = " << swapFirstLast("abcd") << endl;
    cout << "a = " << swapFirstLast("a") << endl;
    cout << "xy = " << swapFirstLast("xy") << endl;
    return 0;

}
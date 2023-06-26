#include <iostream>

using namespace std;


bool checkLastDigit (int a, int b){
    
    string c = to_string(a);
    string d = to_string(b);

    return c[c.length()-1] == d[d.length()-1];

}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Check if in range for 123, 456 => " << checkLastDigit(123, 456) << endl;
    cout << "Check if in range for  12, 512 => " << checkLastDigit(12, 512) << endl;
    cout << "Check if in range for   7,  87 => " << checkLastDigit(7, 87) << endl;
    cout << "Check if in range for  12,  45 => " << checkLastDigit(12, 45) << endl;
    return 0;

}
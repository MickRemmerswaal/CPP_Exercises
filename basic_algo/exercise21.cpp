#include <iostream>

using namespace std;


int checkMaxRange (int a, int b){
    
    int c = (a > b ) ? a : b;
        
    if (c >= 20 and c <= 30)
    {
        return c;
    }        

    return 0;

}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Check if in range for 78, 95 => " << checkMaxRange(78, 95) << endl;
    cout << "Check if in range for 20, 30 => " << checkMaxRange(20, 30) << endl;
    cout << "Check if in range for 21, 25 => " << checkMaxRange(21, 25) << endl;
    cout << "Check if in range for 28, 28 => " << checkMaxRange(28, 28) << endl;
    return 0;

}
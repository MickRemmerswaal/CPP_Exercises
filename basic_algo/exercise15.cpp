#include <iostream>

using namespace std;


bool checkRange (int a, int b, int c){
    if (a >= 20 and a <=50)
    {
        return 1;
    }
    
    if (b >= 20 and b <=50)
    {
        return 1;
    }
    
    if (c >= 20 and c <=50)
    {
        return 1;
    }

    return 0;

}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Check if in range for 11, 20, 12 => " << checkRange(11, 20, 12) << endl;
    cout << "Check if in range for 30, 30, 17 => " << checkRange(30, 30, 17) << endl;
    cout << "Check if in range for 25, 35, 50 => " << checkRange(25, 35, 50) << endl;
    cout << "Check if in range for 15, 12,  8 => " << checkRange(15, 12, 8) << endl;
    return 0;

}
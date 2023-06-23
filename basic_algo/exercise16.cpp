#include <iostream>

using namespace std;


bool checkRange (int a, int b){
    bool c = false;
    bool d = false;
    
    if (a >= 20 and a <=50)
    {
        c = true;
    }
    
    if (b >= 20 and b <=50)
    {
        d = true;
    }
    
    if(c == d){
        return 0;
    }

    return 1;

}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Check if in range for 20, 84 => " << checkRange(20, 84) << endl;
    cout << "Check if in range for 14, 50 => " << checkRange(14, 50) << endl;
    cout << "Check if in range for 11, 45 => " << checkRange(11, 45) << endl;
    cout << "Check if in range for 25, 40 => " << checkRange(25, 40) << endl;
    return 0;

}
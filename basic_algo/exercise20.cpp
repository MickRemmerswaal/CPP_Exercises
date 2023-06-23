#include <iostream>

using namespace std;


bool checkRange (int a, int b){
    if (a >= 40 and a <=50)
    {
        if (b >= 40 and b <=50)
        {
            return 1;
        }
    }
    
    if (a >= 50 and a <=60)
    {
        if (b >= 50 and b <=60)
        {
            return 1;
        }
    }    

    return 0;

}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Check if in range for 78, 95 => " << checkRange(78, 95) << endl;
    cout << "Check if in range for 25, 35 => " << checkRange(25, 35) << endl;
    cout << "Check if in range for 40, 50 => " << checkRange(40, 50) << endl;
    cout << "Check if in range for 55, 60 => " << checkRange(55, 60) << endl;
    return 0;

}
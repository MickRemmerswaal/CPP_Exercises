#include <iostream>

using namespace std;


bool checkThirty(int a, int b){

    if( a == 30 or b == 30){
        return true;
    }
    else if ((a + b) == 30)
    {
        return true;
    }
    
    return false;

}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Check for 15 and 15 -> " << checkThirty(15, 15) << endl;
    cout << "Check for 30 and 13 -> " << checkThirty(30, 13) << endl;
    cout << "Check for 40 and 30 -> " << checkThirty(40, 30) << endl;
    cout << "Check for 70 and 10 -> " << checkThirty(70, 10) << endl;
    
    return 0;
}
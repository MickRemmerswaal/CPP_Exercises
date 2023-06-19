#include <iostream>
#include <cmath>

using namespace std;


bool checkDistance(int a){

    int diff100 = abs(a - 100);
    int diff200 = abs(a - 200);

    if( diff100 < 10 or diff200 < 10){
        return true;
    }

    return false;
}



int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Check for 104 -> " << checkDistance(104) << endl;
    cout << "Check for  88 -> "  << checkDistance(88) << endl;
    cout << "Check for 230 -> " << checkDistance(230) << endl;
    cout << "Check for 195 -> " << checkDistance(195) << endl;
    return 0;
}
#include <iostream>

using namespace std;


int checkClosest (int a, int b){
    int c = abs(a-100);
    int d = abs(b-100);

    if(c == d){
        return 0;
    }

    if(c < d){
        return a;
    }

    return b;

}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Check closest to 100 for 78, 95 => " << checkClosest(78, 95) << endl;
    cout << "Check closest to 100 for 95, 95 => " << checkClosest(95, 95) << endl;
    cout << "Check closest to 100 for 99, 70 => " << checkClosest(99, 70) << endl;    
    return 0;

}
#include <iostream>

using namespace std;



int computeDiff(int a){

    int b = 51 - a;

    if(a > 51){
        b = b * -3;
    }
    
    return b;
}



int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Diff for 12 is " << computeDiff(12) << endl;
    cout << "Diff for 32 is " << computeDiff(32) << endl;
    cout << "Diff for 51 is " << computeDiff(51) << endl;
    cout << "Diff for 64 is " << computeDiff(64) << endl;

    return 0;
}
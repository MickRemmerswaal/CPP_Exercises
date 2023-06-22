#include <iostream>

using namespace std;


int checkMultiplier (int a){

    if(a % 7==0 or a % 3 ==0){
        return 1;
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << " 3 = " << checkMultiplier(3) << endl;
    cout << "14 = " << checkMultiplier(14) << endl;
    cout << "12 = " << checkMultiplier(12) << endl;
    cout << "37 = " << checkMultiplier(37) << endl;
    return 0;

}
#include <iostream>

using namespace std;


bool checkTemp (int a, int b){

    if(a > 100 and b < 0){
        return 1;
    }

    if(b > 100 and a < 0){
        return 1;
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;    
    cout << "Check temp for 120 & -1 => " << checkTemp(120, -1) << endl;  
    cout << "Check temp for -1 & 120 => " << checkTemp(-1, 120) << endl; 
    cout << "Check temp for 2 & 120 => " << checkTemp(2, 120) << endl;
    cout << "Check temp for -10 & 50 => " << checkTemp(-10, 50) << endl;
    cout << "Check temp for -10 & -20 => " << checkTemp(-10, -20) << endl;
    return 0;

}
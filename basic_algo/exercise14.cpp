#include <iostream>

using namespace std;


bool checkRange (int a, int b){

    if((a >= 100 and a <= 200) or
        (b >= 100 and b <= 200)){
        return 1;
    }
    
    return 0;
}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Check range for 100 and 199 =>" << checkRange(100, 199) << endl;
    cout << "Check range for 250 and 300 =>" << checkRange(250, 300) << endl;
    cout << "Check range for  73 and   1 =>" << checkRange(73, 1) << endl;
    cout << "Check range for  99 and 200 =>" << checkRange(99, 200) << endl;
    return 0;

}
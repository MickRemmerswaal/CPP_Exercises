#include <iostream>

using namespace std;


int compute (int a, int b){

    if(a == b){
        return (4 * a);
    }

    return a + b;
}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << " 4 + 5 = " << compute( 4, 5) << endl;
    cout << "12 + 3 = " << compute(12, 3) << endl;
    cout << " 4 + 4 = " << compute( 4, 4) << endl;
    return 0;

}
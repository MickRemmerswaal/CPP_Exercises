#include <iostream>

using namespace std;


string copyString (string a, int b){
    string c = "";   

    for(int i = 0; i < b; i++){
        c += a;
    }
    return c;

}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Copy JS 2 times => " << copyString("JS", 2) << endl;
    cout << "Copy JS 3 times => " << copyString("JS", 3) << endl;
    cout << "Copy JS 1 time  => " << copyString("JS", 1) << endl;    
    return 0;

}
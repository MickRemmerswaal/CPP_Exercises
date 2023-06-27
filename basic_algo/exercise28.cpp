#include <iostream>

using namespace std;


string createUnevenString (string a){
    string ret = "";

    for(int i = 0; i < a.length(); i++){
        if(i % 2 == 0){
            ret += a[i];
        }
    }
    
    return ret;

}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Create uneven charstring for Python => " << createUnevenString("Python") << endl;
    cout << "Create uneven charstring for PHP    => " << createUnevenString("PHP") << endl;
    cout << "Create uneven charstring for JS     => " << createUnevenString("JS") << endl;
    
    return 0;

}
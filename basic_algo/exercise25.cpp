#include <iostream>

using namespace std;


string copyString (string a, int b){
    string ret = "";

    if(a.length() >=3){
        string d = a.substr(0, 3);

        for(int i = 0; i < b; i++){
            ret += d;
        }    

    }else{
        for(int i = 0; i < b; i++){
            ret += a;
        } 
    }

    return ret;

}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Copy first three letters 2 times for Python => " << copyString("Python", 2) << endl;
    cout << "Copy first three letters 3 times for Python => " << copyString("Python", 3) << endl;
    cout << "Copy first three letters 3 times for JS     => " << copyString("JS", 3) << endl;
    
    return 0;

}
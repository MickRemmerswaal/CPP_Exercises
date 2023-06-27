#include <iostream>

using namespace std;


int checkAAs(string a){
    int aa = 0;
    
    for(int i = 0; i < a.length() - 1; i++){
        if(a[i] == 'a' and a[i+1] == 'a'){
            aa++;
        }
    }

    return aa;

}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Check aa's for bbaaccaag  => " << checkAAs("bbaaccaag") << endl;
    cout << "Check aa's for jjkiaaasew => " << checkAAs("jjkiaaasew") << endl;
    cout << "Check aa's for JSaaakoiaa => " << checkAAs("JSaaakoiaa") << endl;
    
    return 0;

}
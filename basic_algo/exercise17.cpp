#include <iostream>

using namespace std;


string checkLetters (string a){
    
    string b = a.substr(1, 2);

    if(b == "yt"){
        return a[0] + a.substr(3);
    }

    return a;

}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Check letters for Python => " << checkLetters("Python") << endl;
    cout << "Check letters for ytade => " << checkLetters("ytade") << endl;
    cout << "Check letters for jsues => " << checkLetters("jsues") << endl;
    return 0;

}
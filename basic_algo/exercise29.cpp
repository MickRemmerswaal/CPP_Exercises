#include <iostream>

using namespace std;


string recursiveString(string a){
    string ret = "";

    for(int i = 0; i < a.length(); i++){
        ret += a.substr(0, i + 1);
    }

    return ret;

}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Create recursive string for abcd => " << recursiveString("abcd") << endl;
    cout << "Create recursive string for abc  => " << recursiveString("abc") << endl;
    cout << "Create recursive string for a    => " << recursiveString("a") << endl;
    
    return 0;

}
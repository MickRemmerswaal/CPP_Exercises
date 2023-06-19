#include <iostream>
#include <string>

using namespace std;

string appendIf (string a){
    string b = "if ";

    string check = a.substr(0, 2);
    
    if(check == "if"){
        return a;
    }

    return b + a;

}


int main(int argc, char const *argv[])
{
    
    cout << "------------------------------------------------------------" << endl;
    
    cout << "Append for \"Hello!\" -> "             << appendIf("Hello!") << endl;
    cout << "Append for \"if else\" -> "            << appendIf("if else") << endl;
    cout << "Append for \"else\" -> "               << appendIf("else") << endl;
    cout << "Append for \"if the world goes\" -> "  << appendIf("if the world goes") << endl;

    return 0;
}

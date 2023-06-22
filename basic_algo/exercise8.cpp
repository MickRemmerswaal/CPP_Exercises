#include <iostream>

using namespace std;


string printFour (string a){

    if(a.length() < 2){
        return a;
    }

    string b = a.substr(0, 2);

    return b + b + b + b;
}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << "C Sharp = "    << printFour("C Sharp") << endl;
    cout << "JS = "         << printFour("JS") << endl;
    cout << "a = "          << printFour("a") << endl;
    return 0;

}
#include <iostream>

using namespace std;


string addThree (string a){

    if(a.length() < 3){
        return a + a + a;
    }
    
    string b = a.substr(0,3);

    return b + a + b;
}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Python = " << addThree("Python") << endl;
    cout << "JS = " << addThree("JS") << endl;
    cout << "Code = " << addThree("Code") << endl;
    return 0;

}
#include <iostream>

using namespace std;


bool checkCSharp (string a){

    string b = a.substr(0, 2);

    if(b == "C#"){
        return 1;
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << checkCSharp("C# Sharp") << endl;  
    cout << checkCSharp("C#") << endl;  
    cout << checkCSharp("C++") << endl; 
    return 0;

}
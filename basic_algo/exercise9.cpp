#include <iostream>

using namespace std;


string addLetters (string a){

    char last = a[a.length()-1];
    return last + a + last;
}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Red = "    << addLetters("Red") << endl;
    cout << "Green = "  << addLetters("Green") << endl;
    cout << "1 = "      << addLetters("1") << endl;
    return 0;

}
#include <iostream>

using namespace std;


bool findAA (string a){
    int found = a.find('a');

    if(a[found+1] == 'a'){
        return true;
    }

    return false;

}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Find occurrence of A and check for caabb   => " << findAA("caabb") << endl;
    cout << "Find occurrence of A and check for babaaba => " << findAA("babaaba") << endl;
    cout << "Find occurrence of A and check for aaaaa   => " << findAA("aaaaa") << endl;
    
    return 0;

}
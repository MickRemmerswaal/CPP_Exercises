#include <iostream>

using namespace std;


string removeLetter (string a, int b){
    
    if(b > a.length()){        
        return a;
    }

    return a.erase(b, 1);

}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;

    cout << "Python, 1 = " << removeLetter("Python", 1) << endl;
    cout << "Python, 0 = " << removeLetter("Python", 0) << endl;
    cout << "Python, 4 = " << removeLetter("Python", 4) << endl;
    return 0;

}
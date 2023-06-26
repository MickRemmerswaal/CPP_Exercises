#include <iostream>

using namespace std;


bool checkZeds (string a){
    
    int countZeds = 0;
    
    for(int i = 0; i < a.length(); i++){
        if(a[i] == 'z'){
            countZeds++;
        }
    }

    return countZeds >=2 && countZeds <= 4;

}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Cechk Z's for frizz => " << checkZeds("frizz") << endl;
    cout << "Check Z's for zane  => " << checkZeds("zane") << endl;
    cout << "Check Z's for Zazz  => " << checkZeds("Zazz") << endl;
    cout << "Check Z's for false => " << checkZeds("false") << endl;
    return 0;

}
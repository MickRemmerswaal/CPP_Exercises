#include <iostream>

using namespace std;


int countEndChars(string a){
    int ret = 0;

    string chars = a.substr(a.length() - 2);

    for (int i = 0; i < a.length() - 2; i ++){
        string cur = "";
        cur += a[i];
        cur += a[i+1];

        if(cur == chars){
            ret++;
        }
        
    }

    return ret;

}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Count amount of the last two chars for abcdsab    => " << countEndChars("abcdsab") << endl;
    cout << "Count amount of the last two chars for abcdabab   => " << countEndChars("abcdabab") << endl;
    cout << "Count amount of the last two chars for abcabdabab => " << countEndChars("abcabdabab") << endl;
    cout << "Count amount of the last two chars for abcabd     => " << countEndChars("abcabd") << endl;
    
    return 0;

}
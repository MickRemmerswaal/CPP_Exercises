#include <iostream>

using namespace std;


int returnHighest(int a, int b, int c){
    int highest = 0;

    if(a > highest){
        highest = a;
    } 
   

    if(b > highest){
        highest = b;
    }

    if(c > highest){
        highest = c;
    }

   return highest;
}

int main(int argc, char const *argv[])
{
    cout << "------------------------------------------------------------" << endl;
    cout << "Check highest for 1, 2, 3 => " << returnHighest(1, 2, 3) << endl;
    cout << "Check highest for 1, 3, 2 => " << returnHighest(1, 3, 2) << endl;
    cout << "Check highest for 1, 1, 1 => " << returnHighest(1, 1, 1) << endl;
    cout << "Check highest for 1, 2, 2 => " << returnHighest(1, 2, 2) << endl;
    return 0;

}
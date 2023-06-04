#include <iostream>
#include <iomanip>


int main(int argc, char const *argv[])
{
    double pi = 3.14159265359;
    std::cout << std::fixed << std::setprecision (4);
    std::cout << "The value of pi : " << pi << "\n";
    std::cout <<" The value of pi : " << pi << std::endl;
    std::cout << " The value of pi 4 decimal place of total width 8   : |" << std::setw(8) << pi << "|" << std::endl; 
    std::cout << " The value of pi 4 decimal place of total width 10  : |" << std::setw(10) << pi << "|"<< std::endl; 
   
    std::cout << std::setfill('-'); // setfill() sets to fill the blanks with specified character
    std::cout << " The value of pi 4 decimal place of total width 8   : |" << std::setw(8) << pi << "|" << std::endl; 
    std::cout << " The value of pi 4 decimal place of total width 10  : |" << std::setw(10) << pi << "|"<< std::endl; 
   
    std::cout << std::scientific;  // set value in scientific format with exponent
    std::cout <<" The value of pi in scientific format is : " << pi << std::endl;
   
    bool done = false; // this is boolean variable
    std::cout <<" Status in number : " << done << std::endl;  
    std::cout << std::boolalpha;     // set output in alphabet true or false
    std::cout <<" Status in alphabet : " << done << std::endl;
    std::cout << std::endl;
    return 0;
}

// Accessing of data 
 
#include <bits/stdc++.h>
using namespace std;
class HiHo
{
    // Access specifier
    public:
	    // Data Members
	    string abc;
	 
	    // Member Functions()
	    void printname()
	    {
	       cout << "Good afternoon: " << abc;
	    }
};
 
int main() 
{
    // Declare an object of class HiHo
    HiHo obj1;
 
    // accessing data member
    obj1.abc = "Hello Data Structure";
 
    // accessing member function
    obj1.printname();
    return 0;
}

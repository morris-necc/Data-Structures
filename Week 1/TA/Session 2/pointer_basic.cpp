#include <iostream>
using namespace std;

int main(){
	
	int x = 99;
	
	cout << "The content of x is " << x << endl;
	cout << "The address of x is " << &x << endl;

	// your code here
    int* pointer = &x;
	cout << "The address of x is " << pointer << endl; //print value of pointer
	cout << "The content of x is " << *pointer << endl; //print value stored in its address

	*pointer = 115; //change value stored in the address to 115
	cout << "The address of x is " << pointer << endl; //same as above
	cout << "The content of x is " << *pointer << endl;

	//new keyword
	int* pointer2 = new int;
	*pointer2 = 333;
	cout << "The value of new pointer is "<<*pointer2 << endl;
	delete pointer2;
}
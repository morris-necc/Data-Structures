#include <iostream>
using namespace std;

int main(){
	
	int x = 99;
	
	cout << "The content of x is " << x << endl;
	cout << "The address of x is " << &x << endl;

	// your code here
    int* pointer = &x;
	cout << "The address of x is " << pointer << endl;
	cout << "The content of x is " << *pointer << endl;

	*pointer = 115;
	cout << "The address of x is " << pointer << endl;
	cout << "The content of x is " << *pointer << endl;

	int* pointer2 = new int;
	*pointer2 = 333;
	cout << "The value of new pointer is "<<*pointer2 << endl;
	delete pointer2;
}
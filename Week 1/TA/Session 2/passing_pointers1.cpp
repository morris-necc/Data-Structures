#include <iostream>
using namespace std;

void swap(int x, int y);

int main(){
	int a, b;
	
	cout << "Enter first number " << endl;
	cin >> a;
	
	cout << "Enter second number " << endl;
	cin >> b;
	
	// print before swap
	cout << "BEFORE SWAP: First number is " << a << " and the Second number is " << b << endl;
	
	// try to swap
	swap(a, b);
	
	// print before swap
	cout << endl << "AFTER SWAP: First number is " << a << " and the Second number is " << b << endl;
	
}

void swap(int a, int b){
    // doesn't work because a and b are local variables, and hence don't affect the real variables
	int temp = a;
    a = b;
    b = temp;
}

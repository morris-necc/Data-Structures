#include <iostream>

using namespace std;

// function prototype
void swap(int a, int b); // a and b are parameters
int add(int a, int b);

int main(){
	
	int num; // declare a variable
	num = 77;
	
	char letter = 'H';
	string name= "Ryo";
	float salary = 23.78;
	double balance = 232434343.676;
	bool flag = true;
	
	// pointer
	int* intptr = &num; // to get the address of a variable: &
	cout << intptr;
	
	// call or invoke a function
	

	
	
}

void swap(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int add(int a, int b){
	return a+b;	
}

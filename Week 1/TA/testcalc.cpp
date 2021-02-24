#include <iostream>
using namespace std;

// function prototype
double add(double a, double b);
/*
double sub(double a, double b);
double div(double a, double b);
double mul()double a, double b;
*/
// main
int main(){
	//declaration
	double a, b;
	int option;
	
	// input data
	cout << "enter first data: ";
	cin >> a;
	cout << "enter second data: ";
	cin >> b;
	
	cout << "Choose 1-4 for calculation, otherwise exit program" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Division" << endl;
	cout << "4. Multiplication" << endl;
	cout << "5. Exit the program" << endl;
	cin >> option;
	
	// call each function
	switch(option) {
		case 1:
			cout << add(a, b) << endl;
			break;
		case 2:
			cout << add(a, b) << endl;
			break;
		case 3:
			cout << add(a, b) << endl;
			break;
		case 4:
			cout << add(a, b) << endl;
			break;
		case 5:
			cout << "EXIT..." << endl;
			exit(0);
		default:
			cout << "wrong option" << endl;
				
	}
	
}

// implement each function
double add(double a, double b){
	return a+b;
}

/*
// implement each function
double ad(double) a, double b){
}

// implement each function
double ad(double) a, double b){
}

// implement each function
double ad(double) a, double b){
}
*/


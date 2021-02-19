#include <iostream>
using namespace std;

// declare function prototype
double add (double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

// the main function
int main(){
	//declare variables
	double num1;
	double num2;
	int option;
	double result;
	
	// prompt for input
	cout << "Enter the first number " << endl;
	cin >> num1;
	
	cout << "Enter the second number " << endl;
	cin >> num2;
	
	cout << "What calculation you want to do?" << endl;
	cout << "Choose the following option:" << endl;
	cout << "choose 1: addition" << endl;
	cout << "choose 2: subtraction" << endl;
	cout << "choose 3: multiplication" << endl;
	cout << "choose 4: division" << endl;
	
	cin >> option;

    switch(option){
        case 1:
            add(num1, num2);
            break;
        case 2:
            subtract(num1, num2);
            break;
        case 3:
            multiply(num1, num2);
            break;
        case 4:
            divide(num1, num2);
            break;
        default:
            cout << "wrong option" << endl;
    }

}

double add(double a, double b) {
    cout << a+b << endl;
}
double subtract(double a, double b) {
    cout << a-b << endl;
}
double multiply(double a, double b) {
    cout << a*b << endl;
}
double divide(double a, double b) {
    cout << a/b << endl;
}
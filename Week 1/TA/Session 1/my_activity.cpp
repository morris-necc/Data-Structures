#include <iostream>
using namespace std;

int main(){
	// declare variables
	char day;
	
	// print message to the console
	cout << "What day is it today?" << endl;
	
	// get input data
	cin >> day;

    if(day == 'm' || day == 't' || day == 'w' || day == 'f') {
        cout << "I'm studying" << endl;
    } else if (day == 's'){
        cout << "I go fishing" << endl;
    } else {
        cout << "That isn't a day" << endl;
    }

}
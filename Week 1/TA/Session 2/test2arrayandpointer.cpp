#include <iostream>
using namespace std;

int main(){
	// array in C++
	
	int id[10];
	char dow[] = {'M', 'T', 'W', 'H', 'F', 'S', 'N'};
	
	id[0] = 55;
	id[4] = 77;
	
	cout << id[4] << endl;
	cout << dow[5];
	
	string name[5];
	name[0] = "Ryo";
	name[1] = "Raff";
	name[2] = "Esel";
	name[3] = "Hasan";
	name[4] = "Ali";
	
	for(int i = 0; i<5; i++){
		cout << name[i] << endl;
	}
	
	int* arrptr;
	arrptr = id;
	
	cout << arrptr[0] << endl;
	
}



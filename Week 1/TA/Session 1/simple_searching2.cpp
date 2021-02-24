#include <iostream>
using namespace std;

int main(){
	// declare an array
	int ROW = 9;
	string data[ROW] = {"Nicky","David","Guntur","Cindy","Rizqy","James"};
	string key;
    bool found = false;
	
	// prompt the search key
	cout << "What data are you searching for?" << endl;
	cin >> key;

    //set a boolean value for whether value is found
    for(int i = 0; i < 9; i++){
        if(key == data[i]){
            cout << "Found at index " << i << endl;
            found = true;
            break;
        }
    }
    if(found == false){
        cout << "Not found" << endl;
    }
    
}
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
	// declare an array
	int ROW = 9;
	int data[ROW] = {3,49,1,6,33,13,9,4,6};
	int key;
    bool found = false;
	
	// prompt the search key
	cout << "What data are you searching for?" << endl;
	cin >> key;

    //set a boolean value for whether value is found
    for(int i = 0; i < 9; i++){
        if(key == data[i]){
            key = i; //key variable repurposed to store array index
            found = true;
        }
    }

    if(found == true){
        cout << "Found at index " << key << endl;
    } else {
        cout << "Not found" << endl;
    }
    
}

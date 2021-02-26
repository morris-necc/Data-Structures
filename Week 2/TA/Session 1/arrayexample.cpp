//Use Arrays in C++
#include <iostream>

using namespace std;

int main(){
    int myarr[10];

    for(int i = 0; i<10; i++){
        myarr[i] = 2*i;
    }

    //access the element of array
    cout << "Value at Index 8: " << myarr[8] << endl;

    for(int i=0; i<10; i++){
        cout << myarr[i] << " ";
    }
    cout << endl;

    //insert new data 77 at index 5
    //shift elements first


}
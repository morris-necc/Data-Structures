#include <iostream>
using namespace std;

int main(){
    int x = 7;
    int* p;
    p = &x;

    cout << "x = " << x << endl; //value
    cout << "&x = " << &x << endl; //address

    *p = 2 * (*p);
    cout << "p = " << p << endl; //address
    cout << "*p = " << *p << endl; //value
}
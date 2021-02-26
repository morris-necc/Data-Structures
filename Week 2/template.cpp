#include <iostream>
using namespace std;

//one function works for all data types
template <typename T>
T myMax(T x, T y) {
    return (x>y)?x:y;
}

int main(){
    cout << myMax<int>(1,4) << endl; //int myMax(int x, int y)
    cout << myMax<char>('s', 'm') << endl; //char myMax(char x, char y)
}
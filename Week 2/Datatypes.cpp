#include <iostream>
#include <math.h>

using namespace std;

#define SIZE(x) sizeof(x) * 8

// function to show signed range
void printSignedRange(int count){
    int min = pow(2, count-1);
    int max = pow(2, count-1)-1;
    printf("%d to %d\n", min * (-1), max);
}

void printUnsignedRange(int count){
    unsigned int max = pow(2, count) - 1;
    printf("0 to %u\n", max);
}

int main() {
    cout << "Size of int = " << sizeof(int) << "bytes" << endl;
    cout << "Signed int = ";
    printSignedRange(SIZE(int));
    cout << "Size of unsigned int = " << sizeof(unsigned int) << "bytes" << endl;
    cout << "Unsigned int = ";
    printUnsignedRange(SIZE(unsigned int));
    cout << "Size of char = " << sizeof(char) << "bytes" << endl;
}
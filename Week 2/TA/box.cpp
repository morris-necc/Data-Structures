#include <iostream>
#include box.h
using namespace std;

//your code here
Box::Box(){
    length = 0;
    width = 0;
    height = 0;
}

Box::Box(int l, int w, int h){
    length = l;
    width = w;
    height = h;
}

int Box::calculateArea(){
    return length*width;
}

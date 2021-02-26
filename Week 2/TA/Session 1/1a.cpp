#include <iostream>
using namespace std;

class Box{
	
	// function members (methods)
	public:
		int getLength();
		int getWidth();
		int getHeight();
		void setLength(int l);
		void setWidth(int w);
		void setHeight(int h);
		int calculateArea();
		int calculateVolume();
		Box(); // default constructor
		Box(int l, int w, int h); // constructor
		
	// data members
	protected:
		int length;
		int width;
		int height;

};

// your code here
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

int Box::calculateVolume(){
	return length*width*height;
}

int main(){
	Box mybox;
    
    cout << "The area of your box is " << mybox.calculateArea();

    return 0;
}


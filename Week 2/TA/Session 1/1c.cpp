#include <iostream>
using namespace std;

// base class or super class
class Shape {
	public:
		int getWidth(){
			return width;
		}
		
		int getHeight(){
			return height;
			
		}
		void setWidth(int w){
			width = w;	
		}
	
		void setHeight(int h){
			height = h;	
		}
		
		int getArea(){
			return width*height;
		}

	private:
		int width;
		int height;
	
};


// Derived class or sub class
class Triangle: public Shape{
	public:
		int getArea(){
			return 0.5*getWidth()*getHeight();
			
		}
	
};

class Rectangle: public Shape{
	public:
		int getArea(){
			return getWidth()*getHeight();
		}
	
};

// your code here
int main(){
    Rectangle myRectangle;
    myRectangle.setHeight(10);
    myRectangle.setWidth(10);
    cout << "The rectangle's area is " << myRectangle.getArea();
}
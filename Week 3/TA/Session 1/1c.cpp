// Stacks
// a program to implement a linked stack.
#include <iostream>
#include <cstdlib>

using namespace std;

struct node
{
	int data;
	node *next;
};

class Stack
{
public:
	node* top = nullptr;
	
	node* push(int);
	node* display();
	node* pop();
	int peek();
	
};


node* Stack::push(int val)
{
	node *ptr;
	ptr = new node();
	ptr->data = val;
	if(top == nullptr){
		ptr->next = nullptr;
		top = ptr;
	} else {
		ptr->next = top;
		top = ptr;
	}
	return top;
}

node* Stack::display()
{
	node *ptr;
	ptr = top;

	while(ptr != nullptr){
		cout << ptr->data << endl;
		ptr = ptr->next;
	}
	
	return top;
}

node* Stack::pop()
{
	node* ptr;
	ptr = top;
	if(top == nullptr)
		cout << "\n STACK UNDERFLOW";
	else
	{
		top = top -> next;
		cout << "\n The value being deleted is: " << ptr -> data;
		delete ptr;
	}
	return top;
}

int Stack::peek()
{
	if(top==NULL)
		return -1;
	else
		return top ->data;
}

int main(int argc, char *argv[]) {
	int val, option;
	Stack st;
	do
	{
		cout << "\n *****MAIN MENU*****";
		cout << "\n 1. PUSH";
		cout << "\n 2. POP";
		cout << "\n 3. PEEK";
		cout << "\n 4. DISPLAY";
		cout << "\n 5. EXIT";
		cout << "\n Enter your option: ";
		cin >> option;
		switch(option)
		{
			case 1:
					cout << "\n Enter the number to be pushed on stack: ";
					cin >> val;
					st.top = st.push(val);
					break;
			case 2:
					st.top = st.pop();
					break;
			case 3:
					val = st.peek();
					if (val != -1)
						cout << "\n The value at the top of stack is: " << val;
					else
						cout << "\n STACK IS EMPTY";
					break;
			case 4:
					st.top = st.display();
					break;
		}
	}while(option != 5);

	return 0;
}

/*
Output
*****MAIN MENU*****
1. PUSH
2. POP
3. Peek
4. DISPLAY
5. EXIT
Enter your option : 1
Enter the number to be pushed on stack : 100
*/

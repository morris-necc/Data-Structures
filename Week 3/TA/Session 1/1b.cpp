#include <iostream>
#include <cstdlib>
#define MAX 10

using namespace std;

class Stack
{
private:
	int st[MAX];
	int top=-1;

public:
	void push(int val);
	int pop();
};

void Stack::push(int val)
{
	if(top<MAX - 1){
		top++;
		st[top] = val;
	} else {
		cout << "Overflow!" << endl;
	}
}

int Stack::pop()
{
	if(top >= 0){
		int temp = st[top];
		st[top] = NULL;
		top--;
		return temp;
	} else {
		cout << "Underflow!" << endl;
	}
}

void invert(int arr[]){
    Stack st;
    for(int i = 0; i < MAX; i++){
        st.push(arr[i]);
    } //push values into stack
    for (int i = 0; i < MAX; i++){
        arr[i] = st.pop();
    }
}

int main() {
    int newarr[MAX];
    int val;
    for(int i = 0; i < MAX; i++){
        cout << "Enter " << MAX-i << " more integers for the array" <<endl;
        cin >> val;
        newarr[i] = val;
    }
    invert(newarr);
    for(int i = 0; i < MAX; i++){
        cout << newarr[i] << " ";
    }
    cout<< endl;
	return 0;
}


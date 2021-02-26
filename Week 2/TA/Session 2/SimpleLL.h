#include <iostream>
#include <string>
using namespace std;

template <typename T>
struct NODE {
	T data;
	NODE* link;
};

template <typename T>
class SimpleLL {
	public:
		void insert(T item);
		void print();
        bool search(const int& item) const;
		void destroy();
		SimpleLL();
		~SimpleLL();
		
	private:
        NODE<T>* first;
        NODE<T>* current;
		NODE<T>* last;
		int count;
        
};

template <typename T>
void SimpleLL<T>::insert(T item){
    if(count == 0){
        first = new NODE<T>;
        first->data = item;
        first->link = nullptr;
        current = first;
    } else {
        last = new NODE<T>;
        last->data = item;
        last->link = nullptr;
        current->link = last;
        current = last;
    }
    count++;
}

//don't know how to print it manually since there's no way to know
template <typename T>
void SimpleLL<T>::print(){
    current = first;
    while(current != nullptr){
        cout << "Data: " << current->data << endl;
        current = current->link;
        cout << "=======================================" << endl;
    }
}

template <typename T>
SimpleLL<T>::~SimpleLL(){
    delete first;
    delete last;
    delete current;
}

template <typename T>
SimpleLL<T>::SimpleLL(){
    count = 0;
    first = NULL;
    current = NULL;
    last = NULL;
}
//i think 4 and 5 are from the previous question

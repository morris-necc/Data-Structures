#include <iostream>
#include <string>
using namespace std;

struct Student {
	int id;
	string name;
	double gpa;
	Student* link;
};

int main(){
	Student* head;
	Student* current;
	Student* newnode;	
	int sid;
	string sname;
	double sgpa;
    int counter = 1; //to stop at 4 nodes

	//input values and it will automatically put it into the linked list
    while(counter <= 4){
        cout << "Enter student id: ";
        cin >> sid;
        cout << "Enter student name: ";
        cin >> sname;
        cout << "Enter student gpa: ";
        cin >> sgpa;

        if(counter == 1){
            head = new Student;
            current = head;
            current->id = sid;
            current->name = sname;
            current->gpa = sgpa;
            current->link = nullptr;
        } else {
            newnode = new Student;
            newnode->id = sid;
            newnode->name = sname;
            newnode->gpa = sgpa;
            newnode->link = nullptr;
            current->link = newnode;
            current = newnode;
        }
        counter++;
    }

	// print
    cout << endl << endl;
    current = head;
    while(current != nullptr){
        cout << "ID of student: " << current->id << endl;
        cout << "Name of student: " << current->name << endl;
        cout << "GPA of student: " << current->gpa << endl;
        current = current->link;
        cout << "=======================================" << endl;
    }

    delete head;
    delete current;
    delete newnode;
}

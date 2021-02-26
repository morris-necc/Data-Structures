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
	
	//hardcoded values
	//1st node
	head = new Student;
	current = head;
	current->id = 12120;
	current->name = "Ellie";
	current->gpa = 3.45;
	current->link = nullptr;

	//2nd node
	newnode = new Student;
	newnode->id = 23230;
	newnode->name = "Katty";
	newnode->gpa = 3.45;
	newnode->link = nullptr;
	current->link = newnode;
	current = newnode;

	//3rd node
	newnode = new Student;
	newnode->id = 34340;
	newnode->name = "Sia";
	newnode->gpa = 3.45;
	newnode->link = nullptr;
	current->link = newnode;
	current = newnode;

	//4th node
	newnode = new Student;
	newnode->id = 45450;
	newnode->name = "Selena";
	newnode->gpa = 3.45;
	newnode->link = nullptr;
	current->link = newnode;

	//manually printing
	current = head;
	cout << "ID of student: " << current->id << endl;
	cout << "Name of student: " << current->name << endl;
    cout << "GPA of student: " << current->gpa << endl;
	cout << "=======================================" << endl;
	current = current->link;
	cout << "ID of student: " << current->id << endl;
	cout << "Name of student: " << current->name << endl;
    cout << "GPA of student: " << current->gpa << endl;
	cout << "=======================================" << endl;
	current = current->link;
	cout << "ID of student: " << current->id << endl;
	cout << "Name of student: " << current->name << endl;
    cout << "GPA of student: " << current->gpa << endl;
	cout << "=======================================" << endl;
	current = current->link;
	cout << "ID of student: " << current->id << endl;
	cout << "Name of student: " << current->name << endl;
    cout << "GPA of student: " << current->gpa << endl;
	cout << "=======================================" << endl;

    delete head;
    delete current;
    delete newnode;
}
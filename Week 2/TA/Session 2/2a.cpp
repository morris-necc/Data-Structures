#include <iostream>
#include <string>
using namespace std;

struct Student {
	int id;
	string name;
	double gpa;
};

int main(){
	Student s;
	Student* sptr;
	
	int sid;
	string sname;
	double sgpa;

	// your code here
    cout << "Enter the student's id: ";
    cin >> sid;
    cout << "Enter the student's name: ";
    cin >> sname;
    cout << "Enter the student's gpa: ";
    cin >> sgpa;

    //apparently you can use . for normal variables  and -> for pointer variables to refer to fields
    s.id = sid;
    s.name = sname;
    s.gpa = sgpa;

    cout << "Id: " << s.id << endl;
    cout << "Name: " << s.name << endl;
    cout << "GPA: " << s.gpa  << endl;

    //for sptr variable
    sptr = new Student;

    cout << "Enter the student's id: ";
    cin >> sid;
    cout << "Enter the student's name: ";
    cin >> sname;
    cout << "Enter the student's gpa: ";
    cin >> sgpa;

    sptr->id = sid;
    sptr->name = sname;
    sptr->gpa = sgpa;

    cout << "Id: " << sptr->id << endl;
    cout << "Name: " << sptr->name << endl;
    cout << "GPA: " << sptr->gpa  << endl;
    delete sptr;
}
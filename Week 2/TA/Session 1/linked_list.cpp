#include <iostream>
using namespace std;

struct data{
    int num; //field (not attribute)
    struct data* next; //the link field
};

// typedef keyword is to rename any data type to make it easier
// to remember, to code and to process
typedef struct data DATA;

int main(){
    //struct data* node;
    DATA* node;
    DATA* current;
    //where is our storage?
    node = new DATA; //memory allocation

    int x = 77;
    int y = 99;

    //assign data into struct
    node->num = x;

    cout << "First node contains " << node->num << endl;

    //how to link between nodes?

    current = new DATA;
    current->num = y;
    current->next = nullptr;

    cout << "Second node contains " << current->num << endl;

    node->next = current; // links first to second node

    cout << "The content of the 1st node: " << node->num << endl;
    cout << "The content of the 2nd node: " << node->next->num << endl;

    current = new DATA;
    current->num = 145;
    current->next = nullptr;
    node->next->next = current; // this statement link second to third node

    cout << "The content of the 1st node: " << node->num << endl;
    cout << "The content of the 2nd node: " << node->next->num << endl;
    cout << "The content of the 3rd node: " << node->next->next->num << endl;

    cout << endl << endl;
    current = node;
    while(current != nullptr){
        cout << "the content of the current node: " << current->num << endl;
        current = current->next;
    }

    delete node;
    delete current;
}
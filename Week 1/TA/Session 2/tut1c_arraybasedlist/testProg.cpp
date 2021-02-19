#include <iostream>
#include "arrayList.h"

using namespace std;

int main(){


    // initializing variables
    int new_data;
    int location;
    int delete_data;
    createList(10);
    
    cout << "What do you want to do?" << endl;
    cout << "a. INSERT new data" << endl;
    cout << "b. REPLACE existing data with a new one" << endl;
    cout << "c. DELETE existing data" << endl;
    cout << "d. PRINT data" << endl;

    char choice;
    cin >> choice;

    switch(choice) {
        case 'a':
            cout << "Enter new data:" << endl;
            cin >> new_data;
            insert(new_data);
            break;
        case 'b':
            cout << "Input location of item to be replaced:" << endl;
            cin >> location;
            cout << "Enter new data";
            cin >> new_data;
            replaceAt(location, new_data);
            break;
        case 'c':
            cout << "Enter value to be deleted:" << endl;
            cin >> delete_data;
            remove(delete_data);
            break;
        case 'd':
            print();
            break;
    }
}

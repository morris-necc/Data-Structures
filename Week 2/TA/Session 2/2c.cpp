#include <iostream>
#include <string>
#include "SimpleLL.h"

using namespace std;

int main(){
	SimpleLL<int> list;
	int num;
    bool flag = true;

    while(flag){
        cout << "Enter a number. If you type -999, it will stop building the list." << endl;
        cin >> num;
        if(num == -999){
            flag = false;
        } else {
            list.insert(num);
        }
    }
	
	list.print();

}
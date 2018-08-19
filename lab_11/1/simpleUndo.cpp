#include "stdafx.h"
#include <iostream>
#include "Stack.h"

using namespace std;

int main(int argc, const char * argv[]) {
    
    int total = 0;
    
    char command = 'a';
    
    Stack ops = Stack();
    
    while (command != 'q') {
        cin >> command;
        if (command == 'a') {
            int value;
            cin >> value;
            
            total += value;
            
            ops.push(value);
            
            cout << "Total is: " << total << endl;
        }
		else if (command == 's') {
			int value;
			cin >> value;

			total -= value;

			ops.push(value);

			cout << "Total is: " << total << endl;
		}
		else if (command == 'm') {
			int value;
			cin >> value;

			total *= value;

			ops.push(value);

			cout << "Total is: " << total << endl;
		}
		else if (command == 'd') {
			int value;
			cin >> value;

			total /= value;

			ops.push(value);

			cout << "Total is: " << total << endl;
		}
        else if (command == 'z') {
            if (ops.isEmpty()) {
                cout << "Can't undo anymore..." << endl;
            }
            else {
                int value = ops.pop();
                
                total = value;
                
                cout << "Total is: " << total << endl;
            }
        }
    }
    
    cout << "Bye!" << endl;
    
    return 0;
}

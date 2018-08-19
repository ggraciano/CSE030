// CSE30013.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num;

	while (true) {
		cin >> num;
		if (num > 0) {
			if (num % 2 != 0) {
				cout << "ODD" << endl;
			}
			else {
				cout << "EVEN" << endl;
			}
		}
		else {
			break;
		}
	}
    return 0;
}


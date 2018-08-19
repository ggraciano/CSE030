// CSE30017.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include <string>
//#include <sstream>

using namespace std;

int main()
{
	char ch;
	int num;

	while (true) {
//		cout << "Enter character: ";
		cin >> ch;

//		cout << "Enter number of times to be displayed: ";
		cin >> num;

		if (num == -1) {
			cout << endl;
		}
		else if (num == -2) {
			break;
		}
		else {
			for (int i = 0; i < num; i++) {
				cout << ch;
			}
		}
	}
/*	string input, temp1, temp2;
	stringstream ss;
	char ch;
	int num;

	while (true) {
		getline(cin, input);

		ss.str(string());
		ss.clear();
		ss.str(input);

		getline(ss, temp1, ' ');
		stringstream(temp1) >> ch;
		
		getline(ss, temp2);
		stringstream(temp2) >> num;

		if (num == -1) {
			cout << endl;
		}
		else if (num == -2) {
			break;
		}
		else {
			for (int i = 0; i < num; i++) {
				cout << ch;
			}
		}
	}*/
    return 0;
}


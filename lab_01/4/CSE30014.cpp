// CSE30014.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sent;
	int num;

	cout << "Sentence: ";
	getline(cin, sent);

	cout << "Number of times to be written out: ";
	cin >> num;

	for (int i = 0; i < num; i++) {
		cout << sent << endl;
	}
    return 0;
}


// CSE30012.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num;

	cin >> num;

	if (num % 2 != 0) {
		cout << "ODD" << endl;
	}
	else {
		cout << "EVEN" << endl;
	}
    return 0;
}


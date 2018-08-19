// CSE30015.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int num, count;

	cin >> num;
	
	for (int i = 0; i < num; i++) {
		count = 0;
		for (int j = 2; j <= i; j++) {
			if (i % j == 0) {
				count++;
			}
		}
		if (count == 1) {
			cout << i << endl;
		}
	}
    return 0;
}


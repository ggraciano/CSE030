// CSE30022.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include <fstream>
//#include <sstream>
#include <string>

using namespace std;

int main()
{
	ifstream myReadFile;
//	stringstream ss;
	string temp;
	int counter = 0;

	myReadFile.open("words.txt");

	if (myReadFile.is_open()) {
		while (myReadFile >> temp) {
			counter++;
		}
/*		while (getline(myReadFile, temp)) {
			ss << temp;
			counter++;
			while (getline(ss, temp, ' ')) {
				counter++;
			}
			ss.str(string());
			ss.clear();
		}
*/	}
	else {
		cout << "Unable to open file" << endl;
		exit(1);
	}

	cout << counter << endl;

	myReadFile.close();
    return 0;
}


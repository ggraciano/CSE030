// CSE30025.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int assignLine(ifstream& myReadFile, string str, vector<string>& istr) {
	int num = 0;
	
	while (getline(myReadFile, str)) {
		istr.push_back(str);
		num++;
	}
	return num;
}

void print(vector<string>& istr, int num) {
	for (int i = 0; i < num; i++) {
		cout << istr[i];
	}
}

int main()
{
	ifstream myReadFile;
	string str;
	vector<string> istr;
	int num;

	myReadFile.open("code.cpp");

	if (myReadFile.is_open()) {
		num = assignLine(myReadFile, str, istr);
		print(istr, num);
	}
	else {
		cout << "Unable to open file" << endl;
		exit(1);
	}
    return 0;
}


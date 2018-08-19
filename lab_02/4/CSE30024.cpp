// CSE30024.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int countLine(ifstream& myReadFile, string str, vector<string>& istr) {
	int num = 0;

	while (getline(myReadFile, str)) {
		istr.push_back(str);
		num++;
	}
	return num;
}

//void assignLineNum(ifstream& myReadFile, string str, vector<string>& istr, int num) {
//	for (int i = 0; i < num; i++) {
//		getline(myReadFile, str);
//		istr.push_back(str);
//	}
//}

void reverseOrder(vector<string>& istr, vector<string>& rstr, int num) {
	for (int i = num - 1; i >= 0; i--) {
		rstr.push_back(istr[i]);
	}
}

void print(vector<string>& rstr, int num) {
	for (int i = 0; i < num; i++) {
		cout << i << ": " << rstr[i] << endl;
	}
}

int main()
{
	ifstream myReadFile;
	string str;
	vector<string> istr, rstr;
	int num;

	myReadFile.open("code.cpp");

	if (myReadFile.is_open()) {
		num = countLine(myReadFile, str, istr);
		//assignLineNum(myReadFile, str, istr, num);
		reverseOrder(istr, rstr, num);
		print(rstr, num);
	}
	else {
		cout << "Unable to open file" << endl;
		exit(1);
	}
    return 0;
}


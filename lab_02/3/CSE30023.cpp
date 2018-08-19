// CSE30023.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <algorithm>
#include <cctype>
#include <iostream>
#include <fstream>
//#include <sstream>
//#include <cstring>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ifstream myReadFile;
	//stringstream ss1, ss2;
	string temp1, temp2,/* temp3, temp4, temp5, temp6, temp7,*/ word;
	//vector<string> var;
	//char chars[] = ",.;:?!";
	int counter = 0;

	cin >> word;

	//var.push_back(word);

	temp1 = word;

	for (unsigned int i = 0; i < word.length(); i++) {
		//temp1 = word;
		temp1[i] = toupper(temp1[i]);
		
		//var.push_back(temp1);
	}

	//temp1 = word;

	//transform(temp1.begin(), temp1.end(), temp1.begin(), ::toupper);

	//var.push_back(temp1);

	//for (int k = 0; k < var.size(); k++) {
	//	cout << var[k] << endl;
	//}

	myReadFile.open("words.txt");

	if (myReadFile.is_open()) {
		while (myReadFile >> temp2) {
			//for (unsigned int j = 0; j < strlen(chars); j++) {
			//	temp2.erase(remove(temp2.begin(), temp2.end(), chars[j]), temp2.end());
			//}
			for (unsigned int l = 0; l < temp2.size(); l++) {
				temp2[l] = toupper(temp2[l]);

				if (ispunct(temp2[l])) {
					temp2.erase(l--, 1);
				}
			}
			//for (unsigned int k = 0; k < temp1.size(); k++) {
				if (temp1 == temp2) {
					counter++;
				}
			 //}
			//cout << temp2 << " ";
			//ss1.str(temp2);

			//getline(ss1, temp3, ',');
			//getline(ss1, temp3, '.');
			//getline(ss1, temp3, '?');
			//getline(ss1, temp3, '!');

			//cout << temp3 << " ";

			//for (int j = 0; j < var.size(); j++) {
			//	if (var[j] == temp3) {
			//		//cout << temp3 << endl;
			//		counter++;
			//	}
			//}

			//ss1.str(string());
			//ss1.clear();
		}
		//while (getline(myReadFile, temp2)) { // delimits by \n
		//	ss1.str(temp2);
		//	//while (getline(ss, temp2, ' ')) {
		//	//	if (temp2 == word) {
		//	//		counter++;
		//	//	}
		//	//}
		//	while (getline(ss1, temp3, ' ')) { // delimits by whitespace
		//		ss2.str(temp3);
		//		for (int j = 0; j < var.size(); j++) {
		//			if (var[j] == temp4) {
		//				counter++;
		//			}
		//		}
		//		while (getline(ss2, temp4, ',')) {
		//			for (int j = 0; j < var.size(); j++) {
		//				if (var[j] == temp4) {
		//					counter++;
		//				}
		//			}
		//		}
		//		while (getline(ss2, temp5, '.')) {
		//			for (int j = 0; j < var.size(); j++) {
		//				if (var[j] == temp5) {
		//					counter++;
		//				}
		//			}
		//		}
		//		while (getline(ss2, temp6, '?')) {
		//			for (int j = 0; j < var.size(); j++) {
		//				if (var[j] == temp6) {
		//					counter++;
		//				}
		//			}
		//		}
		//		while (getline(ss2, temp7, '!')) {
		//			for (int j = 0; j < var.size(); j++) {
		//				if (var[j] == temp7) {
		//					counter++;
		//				}
		//			}
		//		}
		//		ss2.str(string());
		//		ss2.clear();
		//	}
		//	ss1.str(string());
		//	ss1.clear();
		//}
	}
	else {
		cout << "Unable to open file" << endl;
		exit(1);
	}

	cout << counter << endl;

	myReadFile.close();
    return 0;
}


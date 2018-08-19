// CSE30016.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>;
#include <string>;
#include <vector>;

using namespace std;

int main()
{
	string input;
	vector<string> data;

	while (true) {
		cin >> input;
		if (input == "quit") {
			break;
		}
		else if (input.length() > 1) {
			data.push_back(input);
		}
		else if (input.length() == 1) {
			for (int i = 0; i < data.size(); i++) {
				if (data[i][0] == input[0]) {
					cout << data[i] << endl;
				}
			}
		}
	}
    return 0;
}


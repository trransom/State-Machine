#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
int i = 0;
string mystr;

int q8(char c);
int q7(char c);
int q6(char c);
int q5(char c);
int q4(char c);
int q3(char c);
int q2(char c);
int q1(char c);

int q8(char c) {
	if (c == '-') {
		i++;
		if (i <= mystr.size() - 1) {
			return 0;
		}
		else {
			return 1;
		}
	}
	else {
		i++;
		return q5(mystr.at(i));
	}
}


int q7(char c) {
	if (c == '-') {
		i++;
		if (i <= mystr.size() - 1) {
			return q8(mystr.at(i));
		}
		else {
			return 0;
		}
	}
	else {
		i++;
		return q5(mystr.at(i));
	}
}


int q6(char c) {
	if (c == '}') {
		i++;
		if (i <= mystr.size() - 1) {
			return q7(mystr.at(i));
		}
		else {
			return 0;
		}
	}
	else {
		i++;
		return q5(mystr.at(i));
	}
}


int q5(char c) {
	if (c == '*') {
		i++;
		if (i <= mystr.size() - 1) {
			return q6(mystr.at(i));
		}
		else {
			return 0;
		}
	}
	else {
		i++;
		if (i <= mystr.size() - 1) {
			return q5(mystr.at(i));
		}
		
	}
}

int q4(char c) {
	if (c == '*') {
		i++;
		if (i <= mystr.size() - 1) {
			return q5(mystr.at(i));
		}
		else {
			return 0;
		}
	}
	else {
		return 0;
	}
}

int q3(char c) {
	if (c == '{') {
		i++;
		if (i <= mystr.size() - 1) {
			return q4(mystr.at(i));
		}
		else {
			return 0;
		}
	}
	else {
		return 0;
	}
}

int q2(char c) {
	if (c == '-') {
		i++;
		if (i <= mystr.size() - 1) {
			return q3(mystr.at(i));
		}
		else {
			return 0;
		}
	}
	else {
		return 0;
	}
}


int q1 (char c) {
	if (c == '-') {
		i++;
		if (i<=mystr.size()-1) {
			return q2(mystr.at(i));
		}
		else {
			return 0;
		}
		
	}
	else {
		return 0;
	}
}

int main() {
	string place;
	cout << "Enter a string:  ";
	getline(cin, mystr);

	int t = q1(mystr.at(i));

	if (t == 1) {
		cout << "Valid comment." << endl;
	}
	else {
		cout << "Invalid comment." << endl;
	}
}
#include<iostream>
using namespace std;

int main() {
	cout << "Enter the student marks" << endl;
	int m;
	cin >> m;
	if (m >= 90) {
		cout << "Grade : S" << endl;
	} else if (m >= 80) {
		cout << "Grade : A" << endl;
	} else if (m >= 70) {
		cout << "Grade : B" << endl;
	}
	else if (m >= 60) {
		cout << "Grade : C" << endl;
	} else if (m >= 50) {
		cout << "Grade : D" << endl;
	} else if (m >= 40) {
		cout << "Grade : E" << endl;
	}
	else {
		cout << "Grade : F" << endl;
	}
	return 0;
}
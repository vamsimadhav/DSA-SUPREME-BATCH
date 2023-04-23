#include<iostream>
using namespace std;

/*
*
**
***
****
*****
****
***
**
*
*/

int main() {
	cout << "Enter the size of Solid Diamond Pattern" << endl;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {

		//Printing Stars
		for (int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	//Downawd
	for (int i = n - 1; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
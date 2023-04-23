#include<iostream>
using namespace std;

/*
1
1 2
1   3
1     4
1 2 3 4 5
*/

int main() {
	cout << "Enter the count of rows for Numeric half Hollow pyramid" << endl;
	int row;
	cin >> row;

	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= i; j++) {
			if (i == 1 || i == row) {
				cout << j << " ";
			}
			else {
				if (j == 1 || j == i) {
					cout << j << " ";
				}
				else {
					cout << "  ";
				}
			}
		}
		cout << endl;
	}
	return 0;
}
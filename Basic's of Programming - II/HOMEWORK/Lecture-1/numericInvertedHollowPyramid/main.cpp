#include<iostream>
using namespace std;

/*
5 4 3 2 1
4     1
3   1
2 1
1
*/

int main() {
	cout << "Enter the count of rows for Numeric Inverted half Hollow pyramid" << endl;
	int row;
	cin >> row;

	for (int i = row; i >= 1;  i--) {
		for (int j = i; j >= 1;j--) {
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
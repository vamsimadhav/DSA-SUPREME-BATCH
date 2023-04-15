#include<iostream>
using namespace std;

int main() {
	cout << "Enter the column size of hollow rectangle" << endl;
	int col;
	cin >> col;
	int row = col - 1;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (i == 0 || i == row - 1) {
				cout << "* ";
			}
			else {
				if (j == 0 || j == col - 1) {
					cout << "* ";
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
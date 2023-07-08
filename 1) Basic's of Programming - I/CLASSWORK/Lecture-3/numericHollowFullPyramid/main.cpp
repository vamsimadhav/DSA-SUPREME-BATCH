#include<iostream>
using namespace std;

int main() {
	cout << "Enter the row of Hollow Numeric Pyramid" << endl;
	int row;
	cin >> row;

	for (int i = 1; i <= row; i++) {
		//Spaces
		for (int j = row; j > i; j--) {
			cout << " ";
		}

		//Number
		for (int k = 1; k <= i; k++) {
			if (i == row) {
				cout << k << " ";
			}
			else if (k == 1) {
				cout << k << " ";
			} 
			else if (k == i) {
				cout << i << " ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	return 0;
}
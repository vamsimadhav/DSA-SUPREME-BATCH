#include<iostream>
using namespace std;

int main() {
	cout << "Enter the row of Pyramid" << endl;
	int row;
	cin >> row;

	for (int i = 1; i <= row; i++) {
		//Print Spaces
		int spaces = row - i;
		for (int j = spaces; j > 0; j--) {
			cout << " ";
		}

		//print * for first triangle
		for (int k = 1; k <= i; k++) {
			cout << "* ";
		}
		
		cout << endl;
	}
	return 0;
}
#include<iostream>
using namespace std;

int main() {
	cout << "Enter the row of Inverted Pyramid" << endl;
	int row;
	cin >> row;

	for (int i = 0; i < row; i++) {

		//Print Spaces
		int space = 0;
		for (int k = space; k < i; k++) {
			cout << " ";
		}

		//Print stars
		for (int j = 1; j <= row - i; j++) {
			cout << "* ";
		}

		cout << endl;
	}
	return 0;
}
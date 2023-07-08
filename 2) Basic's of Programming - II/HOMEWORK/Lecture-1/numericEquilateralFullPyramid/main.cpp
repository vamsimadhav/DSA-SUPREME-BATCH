#include<iostream>
using namespace std;

/*
		1
	  1 2 1
	1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1
*/

int main() {
	cout << "Enter the row of Numeric Pyramid" << endl;
	int row;
	cin >> row;

	for (int i = 1; i <= row; i++) {
		//Print Spaces
		int spaces = row - i;
		for (int j = spaces; j > 0; j--) {
			cout << "  ";
		}
		int ans = i;
		//print * for first triangle
		for (int k = 1; k <= i; k++) {
			cout << k << " ";
			
		}

		for (int l = i-1; l >= 1; l--) {
			cout << l << " ";
		}


		cout << endl;
	}
	return 0;
}
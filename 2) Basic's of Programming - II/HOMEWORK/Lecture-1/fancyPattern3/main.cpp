#include<iostream>
using namespace std;

/*
********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****
*/

int main() {
	cout << "Enter no of rows in fancy pattern" << endl;
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		//Print stars
		int space = 2 * n - i - 1;
		for (int j = space; j >= 1; j--) {
			cout << "*";
		}

		//Print Numbers
		for (int j = 1; j <= i; j++) {
			if (j == i) {
				cout << i;
			}
			else {
				cout << i << "*";
			}
		}
		//Print Stars
		int space1 = 2 * n - i - 1;
		for (int j = space1; j >= 1; j--) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
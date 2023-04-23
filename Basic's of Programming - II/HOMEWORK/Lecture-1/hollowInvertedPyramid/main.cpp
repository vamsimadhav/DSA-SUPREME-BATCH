#include<iostream>
using namespace std;

int main() {
	cout << "enter the rows of hollow trianlge" << endl;
	int n;
	cin >> n;

	for (int i = n; i > 0; i--) {
		for (int j = 0; j <i; j++) {
			if (i == n || i == 1) {
				cout << "* ";
			}
			else if (j == 0 || j == i - 1) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	return 0;
}
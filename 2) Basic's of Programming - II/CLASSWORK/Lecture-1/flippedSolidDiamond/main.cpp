#include<iostream>
using namespace std;

int main() {
	cout << "Enter the no of rows in flipped solid diamond " << endl;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		//First half of flipped diamond
		for (int j = n-i-1; j >=0; j--) {
			cout << "* ";
		}
		//Print space
		int space = 2*i;
		for (int j = 0; j < space; j++) {
			cout << "  ";
		}
		//Print 2nd half of *'s
		for (int j = n - i - 1; j >= 0; j--) {
			cout << "* ";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		//First half of flipped diamond
		for (int j = 0; j <=i; j++) {
			cout << "* ";
		}
		//Print space
		int space = (n - i - 1) * 2;
		for (int j = 0; j < space; j++) {
			cout << "  ";
		}
		//Print *s
		for (int j = 0; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
#include<iostream>
using namespace std;

int main() {
	cout << "Enter the count of rows for Numeric half pyramid" << endl;
	int row;
	cin >> row;

	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}
#include<iostream>
using namespace std;

int main() {
	cout << "Enter the count of rows for half pyramid" << endl;
	int row;
	cin >> row;

	for (int i = 0; i < row; i++) {
		for (int j = row; j > i; j--) {
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
#include<iostream>
using namespace std;

int main() {
	cout << "Enter the count of rows for half pyramid" << endl;
	int row;
	cin >> row;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
#include<iostream>
using namespace std;

int main() {
	cout << "Enter the count of rows for Inverted Numeric half pyramid" << endl;
	int row;
	cin >> row;

	for (int i = 0; i < row; i++) {
		for (int j = 1; j <=row -i; j++) {
			cout << j << " ";
		}
		cout << endl;
	}
	return 0;
}
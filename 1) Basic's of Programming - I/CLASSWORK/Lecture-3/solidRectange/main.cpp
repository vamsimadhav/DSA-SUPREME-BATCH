#include<iostream>
using namespace std;

int main() {

	cout << "Enter the num of col needed in a rectangle" << endl;
	int col;
	cin >> col;
	int row = col - 1;

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
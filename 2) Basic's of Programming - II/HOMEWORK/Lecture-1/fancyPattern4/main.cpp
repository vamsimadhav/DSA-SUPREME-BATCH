#include<iostream>
using namespace std;

/*INCOMPLETE*/

int main() {
	cout << "Enter the no of rows" << endl;
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int count = 1;
		for (int j = 1; j <= i; j++) {
			if (j == 1 || j == i) {
				cout << "*";
			}
			else {
				cout << count;
				count++;
			}
		}
		cout << endl;
	}
	return 0;
}
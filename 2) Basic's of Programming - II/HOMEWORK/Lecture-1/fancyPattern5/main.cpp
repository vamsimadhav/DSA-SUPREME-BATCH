#include<iostream>
using namespace std;

/*INCOMPLETE*/

int main() {
	cout << "Enter the row count" << endl;
	int n;
	cin >> n;
	int count = 1;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (i == 1 || j == i) {
				cout << count;
				count++;
			}
			else {
				cout << count << "*";
				count++;
			}
		}
		cout << endl;
	}
	for (int i = n; i >= 1; i--) {
		for (int j = 2 * i - 1; j <= 2 * i + 2; j++) {
			cout << j;
		}
		cout << endl;
	}
	return 0;
}
#include<iostream>
using namespace std;

//1
//2 * 2
//3 * 3 * 3
//4 * 4 * 4 * 4
//4 * 4 * 4 * 4
//3 * 3 * 3
//2 * 2
//1

int main() {
	cout << "enter the no of rows" << endl;;
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			if (j == i) {
				cout << i;
			}
			else {
				cout << i << "*";
			}
		}
		cout << endl;
	}
	for (int i = n; i >=1; i--) {
		for (int j = 1; j <= i; j++) {
			if (j == i) {
				cout << i;
			}
			else {
				cout << i << "*";
			}
		}
		cout << endl;
	}
	return 0;
}
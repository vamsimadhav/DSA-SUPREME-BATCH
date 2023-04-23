#include<iostream>
using namespace std;

int main() {
	cout << "Enter the no of row for fancy pattern" << endl;
	int n;
	cin >> n;

	for (int i = 3; i < n + 3; i++) {
		for (int j = 0; j <= i - 3; j++) {
			cout << i;
		}
		cout << endl;
		if (i == n + 3 - 1) {
			int k = 1;
			for (int j = n + 3 - 1 - k; j >= 3; j--) {
				for (int l = 0; l <=j - 3; l++) {
					cout << j;
					k++;
				}
				cout << endl;
			}
		}
	}

	return 0;
}
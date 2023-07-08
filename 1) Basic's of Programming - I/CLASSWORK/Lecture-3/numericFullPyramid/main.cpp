#include<iostream>
using namespace std;

int main() {
	cout << "Enter the row of Numeric Pyramid" << endl;
	int row;
	cin >> row;

	for (int i = 1; i <= row; i++) {
		//Print Spaces
		int spaces = row - i;
		for (int j = spaces; j > 0; j--) {
			cout << "  ";
		}
		int ans = i;
		//print * for first triangle
		for (int k = 1; k <= i; k++) {
			cout << ans << " ";
			ans++;
		}

		for (int l = 2 * i - 2; l >=i; l--) {
			cout << l << " ";
		}


		cout << endl;
	}
	return 0;
}
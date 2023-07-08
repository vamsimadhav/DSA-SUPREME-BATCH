#include<iostream>
using namespace std;

int main() {
	cout << "Enter the number" << endl;
	int n;
	cin >> n;
	if (n == 0) {
		cout << "The factorial is: " << 1 << endl;
	}
	else {
		int ans = 1;
		for (int i = 1; i <= n; i++) {
			ans *= i;
		}
		cout << "The factorial is: " << ans << endl;
	}
	return 0;
}
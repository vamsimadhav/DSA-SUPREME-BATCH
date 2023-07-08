#include<iostream>
using namespace std;
int main() {
	cout << "Enter the number" << endl;
	int n;
	cin >> n;
	int count = 0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			count++;
		}
	}
	if (count != 0) {
		cout << "Not a prime number" << endl;
	}
	else {
		cout << "a prime number" << endl;
	}
	return 0;
}
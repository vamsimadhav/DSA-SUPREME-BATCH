#include<iostream>
using namespace std;


void printAllDigits(int n) {
	while (n > 9) {
		int digit = n % 10;
		cout << digit << endl;
		n = n / 10;
	}

	cout << n << endl;
}

int main() {

	int n;
	cin >> n;

	printAllDigits(n);
	return 0;
}
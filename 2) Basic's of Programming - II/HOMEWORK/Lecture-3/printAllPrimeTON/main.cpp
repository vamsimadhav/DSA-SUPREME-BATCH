#include<iostream>
using namespace std;

int primeNumber(int n) {
	int count = 0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			count++;
		}
	}
	if (count != 0) {
		return -1;
	}
	else {
		return n;
	}
}

int main() {
	cout << "Enter the number" << endl;
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int num = primeNumber(i);
		if (num != -1) {
			cout << num << " ";
		}
	}
	
	return 0;
}
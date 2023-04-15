#include<iostream>
using namespace std;

int main() {
	cout << "Enter the Number" << endl;
	int num;
	cin >> num;
	int count = 0;
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			count++;
		}
	}
	if (count == 0) {
		cout << num << " is a prime number" << endl;
	}
	else {
		cout << num << " is not a prime number" << endl;
	}
	return 0;
}
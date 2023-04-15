#include<iostream>
using namespace std;

int main() {
	cout << "Enter the Num" << endl;
	int num;
	cin >> num;
	int factorial = 1;
	if (num == 0) {
		cout << "The factorial of " << num << " is " << factorial << endl;
	}
	else {
		for (int i = 1; i <= num; i++) {
			factorial *= i;
		}
		cout << "The factorial of " << num << " is " << factorial << endl;
	}
	return 0;
}
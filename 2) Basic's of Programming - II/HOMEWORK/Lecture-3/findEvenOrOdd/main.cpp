#include<iostream>
using namespace std;

int main() {
	cout << "Enter the number" << endl;
	int n;
	cin >> n;
	if (n % 2 == 0) {
		cout << "The number is even";
	}
	else {
		cout << "The number is odd";
	}
	return 0;
}
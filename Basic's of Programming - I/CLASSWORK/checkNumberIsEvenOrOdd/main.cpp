#include<iostream>
using namespace std;

int main() {
	cout << "Enter the number" << endl;
	int num;
	cin >> num;
	if (num % 2 == 0) {
		cout << num << " is a even number" << endl;
	}
	else {
		cout << num << " is a odd number" << endl;
	}
	return 0;
}
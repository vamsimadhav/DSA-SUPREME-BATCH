#include<iostream>
using namespace std;
int main() {
	cout << "enter number" << endl;
	int num;
	cin >> num;
	if (num > 0) {
		cout << num << " is positive" << endl;
	}
	else if (num < 0) {
		cout << num << " is negative" << endl;
	}
	else {
		cout << num << " is zero" << endl;
	}
	return 0;
}
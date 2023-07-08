#include<iostream>
using namespace std;

int main() {
	int p, t, r;
	cout << "Enter the Principal Amount" << endl;
	cin >> p;
	cout << "Enter the Rate" << endl;
	cin >> r;
	cout << "Enter the Time Period" << endl;
	cin >> t;

	int amount = p * t * r / 100;
	cout << "The simple interset is : " << amount << endl;
	return 0;
}
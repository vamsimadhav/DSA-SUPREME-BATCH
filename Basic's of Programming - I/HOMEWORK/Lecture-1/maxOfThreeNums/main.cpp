#include<iostream>
using namespace std;


int main() {
	cout << "Enter the value of A, B, C" << endl;
	int a,b,c;
	cin >> a >> b >> c;

	if (a > b && a > c) {
		cout << "The max value is : " << a << endl;
	} else if (b > a && b > c) {
		cout << "The max value is : " << b << endl;
	}
	else {
		cout << "The max value is : " << c << endl;
	}
	return 0;
}
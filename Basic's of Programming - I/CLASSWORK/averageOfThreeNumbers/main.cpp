#include<iostream>
using namespace std;

int main() {

	cout << "Enter 3 numbers to be added" << endl;
	int a, b, c;
	cin >> a >> b >> c;
	int sum = a + b + c;
	int avg = sum / 3;
	cout << "Average of 3 numbers is : " << avg << endl;
	return 0;
}
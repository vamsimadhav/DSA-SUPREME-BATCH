#include<iostream>
using namespace std;

int main() {
	cout << "Enter the Sides of the triangle" << endl;
	int a, b, c;
	cin >> a >> b >> c;

	if (a + b > c && a + c > b && b + c > a) {
		cout << "The given triangle is a valid triangle" << endl;
	}
	else {
		cout << "The given triangle is a not valid triangle" << endl;
	}
	return 0;
}
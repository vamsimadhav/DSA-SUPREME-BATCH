#define _USE_MATH_DEFINES
#include<iostream>
using namespace std;

int main() {
	cout << "Enter the radius of circle" << endl;
	int rad;
	cin >> rad;
	double area = M_PI * rad * rad;
	cout << area;
	return 0;
}
#define _USE_MATH_DEFINES
//Using the above statement to get Pi value in C++
#include<iostream>
using namespace std;

int main() {
	cout << "Enter the radius of Circle" << endl;
	int rad;
	cin >> rad;
	double area = 2 * rad * M_PI;
	cout << "Area of circle is : " << area << endl;
	return 0;
}
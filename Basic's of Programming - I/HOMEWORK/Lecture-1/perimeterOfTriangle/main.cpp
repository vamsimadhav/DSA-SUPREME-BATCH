#include<iostream>
using namespace std;

int main() {
	cout << "Enter the sides of the triangle" << endl;
	int A, B, C;
	cin >> A >> B >> C;
	int perimeter = A + B + C;
	cout << "the Perimeter of the given triangle is : " << perimeter << endl;
	return 0;
}
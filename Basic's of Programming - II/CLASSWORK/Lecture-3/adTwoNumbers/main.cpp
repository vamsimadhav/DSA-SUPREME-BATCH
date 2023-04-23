#include<iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int main() {
	int a = 5;
	int b = 10;

	int ans = add(a, b);

	cout << ans << endl;

	return 0;
}
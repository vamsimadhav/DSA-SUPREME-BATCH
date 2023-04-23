#include<iostream>
using namespace std;

int max(int a, int b,int c) {
	int max = 0;

	if (a > b && a > c) {
		max = a;
	}
	else if (b > a && b > c) {
		max = b;
	}
	else {
		max = c;
	}
	return max;
}

int main() {
	int a = 5;
	int b = 10;
	int c = 1;

	int ans = max(a, b,c);

	cout << ans << endl;

	return 0;
}
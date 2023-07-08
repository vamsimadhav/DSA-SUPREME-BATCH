#include<iostream>
using namespace std;
/*INCOMPLETE*/
int main() {
	cout << "Enter the number" << endl;
	int n;
	cin >> n;
	int ans = 0;
	while (n != 0) {
		ans = ans + (n & 1)*10;
		n = n >> 1;
	}
	cout << ans << endl;
	return 0;
}
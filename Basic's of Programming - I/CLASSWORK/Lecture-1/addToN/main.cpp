#include<iostream>
using namespace std;
int main() {
	cout << "Enter the value of N" << endl;
	int N;
	cin >> N;
	int ans = 0;
	for (int i = 1; i <= N; i++) {
		ans = ans + i;
	}
	cout << "The sum from 1 to " << N << " is : " << ans << endl;
	return 0;
}
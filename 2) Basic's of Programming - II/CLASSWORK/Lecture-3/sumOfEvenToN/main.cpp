#include <iostream>
using namespace std;

int sumOfEvenToN(int n) {
	int sum = 0;

	for (int i = 2; i <= n; i = i += 2) {
		sum += i;
	}
	return sum;
}
int main() {

	int n;
	cin >> n;
	cout << "The sum of even numbers is : " << sumOfEvenToN(n) << endl;
	return 0;
}

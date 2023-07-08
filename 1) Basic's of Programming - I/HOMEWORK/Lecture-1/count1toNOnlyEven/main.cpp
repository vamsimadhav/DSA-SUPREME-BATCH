#include<iostream>
using namespace std;


int main() {
	cout << "Enter the value of N" << endl;
	int N;
	cin >> N;

	for (int i = 2; i <= N; i = i + 2) {
		cout << "The value is : " << i << endl;
	}
	return 0;
}
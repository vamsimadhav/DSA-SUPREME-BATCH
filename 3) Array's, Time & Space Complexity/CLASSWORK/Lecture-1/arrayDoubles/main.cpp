#include<iostream>
using namespace std;

int main() {
	cout << "Enter 5 int array values" << endl;

	int arr[5];

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	cout << "Value of doubles array is" << endl;

	for (int i = 0; i < 5; i++) {
		cout << 2 * arr[i] << " ";
	}
}
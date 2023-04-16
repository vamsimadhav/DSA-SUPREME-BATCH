#include<iostream>
using namespace std;

int main() {
	cout << "Enter the array of size 5" << endl;
	int arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	int max = INT16_MIN;

	for (int i = 0; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << "The maximum present in the array is :" << max << endl;

	return 0;
}
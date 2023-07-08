#include<iostream>
using namespace std;

int main() {
	cout << "Enter the array of size 10 containg only 0 & 1" << endl;
	int arr[10];
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	int zeroCount = 0;
	int oneCount = 0;

	for (int i = 0; i < 10; i++) {
		if (arr[i] == 0) {
			zeroCount++;
		}
		else {
			oneCount++;
		}
	}
	cout << "The no of 0's present in the array is :" << zeroCount << endl;
	cout << "The no of 1's present in the array is :" << oneCount << endl;

	return 0;
}
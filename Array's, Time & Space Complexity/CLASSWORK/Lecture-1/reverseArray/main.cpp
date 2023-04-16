#include<iostream>
using namespace std;

int main() {
	cout << "Enter the array of size 7" << endl;
	int arr[7];
	for (int i = 0; i < 7; i++) {
		cin >> arr[i];
	}

	int start = 0;
	int end = 6;
	while (start <= end) {
		swap(arr[start], arr[end]);
		start++;
		end--;
	}
	
	for (int i = 0; i < 7; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
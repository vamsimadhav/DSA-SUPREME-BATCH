#include<iostream>
using namespace std;

int main() {

	cout << "Enter the array of size 7" << endl;
	int arr[8];
	for (int i = 0; i < 7; i++) {
		cin >> arr[i];
	}

	//print extremes
	int start = 0;
	int end = 6;
	while (start <= end) {
		if (start == end) {
			cout << arr[start] << " ";
		}
		else {
			cout << arr[start] << " ";
			cout << arr[end] << " ";
			
		}
		start++;
		end--;
	}

	return 0;
}
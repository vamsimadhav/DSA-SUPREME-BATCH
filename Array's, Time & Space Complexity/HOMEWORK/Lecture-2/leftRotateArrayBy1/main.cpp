#include<iostream>
#include<vector>
using namespace std;

int main() {
	cout << "Enter the size of array" << endl;
	int n;
	cin >> n;
	cout << "Enter the array of size " << n << endl;
	vector <int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int firstElement = arr[0];

	for (int i = 0; i < n; i++) {
		if (i == n - 1) {
			arr[n - 1] = firstElement;
		}
		else {
			arr[i] = arr[i + 1];
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
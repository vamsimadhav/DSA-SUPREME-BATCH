#include<iostream>
#include<vector>
using namespace std;

int main() {
	cout << "enter the size of array" << endl;
	int n;
	cin >> n;
	cout << "Enter the array" << endl;
	vector <int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int start = 0;
	int end = n - 1;
	int i = 0;
	while (i != end) {
		if (arr[i] == 0) {
			swap(arr[start], arr[i]);
			start++;
			i++;
		}
		if (arr[i] == 1) {
			swap(arr[end], arr[i]);
			end--;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
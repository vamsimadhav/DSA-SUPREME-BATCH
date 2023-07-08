#include<iostream>
#include<vector>
using namespace std;
int main() {
	cout << "Enter the size of array" << endl;
	int n;
	cin >> n;
	cout << "Enter the array" << endl;

	vector <int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "Enter the sum" << endl;
	int sum;
	cin >> sum;

	for (int i = 0; i < n; i++) {
		int element = arr[i];
		for (int j = i + 1; j < n; j++) {
			if (element + arr[j] == sum) {
				cout << "Pair found are : " << element << ", " << arr[j] << endl;
			}
		}
	}


	return 0;
}
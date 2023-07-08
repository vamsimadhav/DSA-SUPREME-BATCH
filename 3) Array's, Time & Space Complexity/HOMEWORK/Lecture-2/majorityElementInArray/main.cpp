#include<iostream>
#include<vector>
using namespace std;

int main() {
	cout << "Enter the array size" << endl;
	int n;
	cin >> n;
	cout << "enter the array" << endl;
	vector <int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int count = 0;
	int temp;
	
	for (int i = 0; i < n; i++) {
		if ((arr[i]^arr[i+1]) == 0) {
			temp++;
		}
	}
	return 0;
}
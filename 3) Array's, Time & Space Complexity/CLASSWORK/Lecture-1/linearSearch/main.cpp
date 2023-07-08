#include<iostream>
using namespace std;

int main() {
	cout << "Enter the array of  5 Elements" << endl;
	int arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	cout << "Enter the element to be searched" << endl;
	int key;
	cin >> key;
	bool flag = false;
	int index;

	for (int i = 0; i < 5; i++) {
		if (arr[i] == key) {
			flag = true;
			index = i;
		}
	}

	if (flag) {
		cout << "Element is present at : " << index << " index" << endl;
	}
	else {
		cout << "Element is not present in the array" << endl;
	}

	return 0;
}
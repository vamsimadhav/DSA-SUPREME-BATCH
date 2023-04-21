#include<iostream>
#include <vector>
using namespace std;

int main() {
	cout << "Enter the  size and array" << endl;
	int size;
	vector <int> arr;
	cin >> size;
	for (int i = 0; i < size; i++) {
		int n;
		cin >> n;
		arr.push_back(n);
	}

	int uniqueElement = 0;
	for (int i = 0; i < size; i++) {
		uniqueElement = uniqueElement ^ arr[i];
	}
	cout << "The unique element in the array is : " << uniqueElement << endl;
}
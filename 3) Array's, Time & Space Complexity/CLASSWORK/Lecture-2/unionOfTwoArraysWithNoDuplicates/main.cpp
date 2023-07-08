#include<iostream>
#include<vector>
using namespace std;


int main() {
	cout << "Enter the size's of first and second array" << endl;
	int a, b;
	cin >> a >> b;

	cout << "Enter the first array" << endl;
	vector <int> firstArr(a);
	for (int i = 0; i < a; i++) {
		cin >> firstArr[i];
	}

	cout << "Enter the second array" << endl;
	vector <int> secondArr(b);
	for (int i = 0; i < b; i++) {
		cin >> secondArr[i];
	}

	for (int i = 0; i < a; i++) {
		int element = firstArr[i];
		for (int j = 0; j < b; j++) {
			if (element == secondArr[j]) {
				secondArr[j] = INT_MIN;
			}
		}
	}

	vector <int> ans;
	for (int i = 0; i < a; i++) {
		ans.push_back(firstArr[i]);
	}

	for (int i = 0; i < b; i++) {
		if (secondArr[i] != INT_MIN) {
			ans.push_back(secondArr[i]);
		}
	}

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}

	return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector <int> a{ 1,2,3,4,5,6 };
	vector <int> b{2,4,6,8};
	vector <int> ans;

	for (int i = 0; i < a.size(); i++) {
		int element = a[i];
		for (int j = 0; j < b.size(); j++) {
			if (element == b[j]) {
				ans.push_back(element);
			}
		}
	}

	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i] << " ";
	}
	return 0;
}
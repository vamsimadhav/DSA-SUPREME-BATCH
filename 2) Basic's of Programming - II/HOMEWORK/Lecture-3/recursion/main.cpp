#include<iostream>
#include<vector>
using namespace std;

void freqInSortedArray(int arr[], int n) {
	int j = 0;
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[j] != arr[i]) {
			j = i;
			cout << arr[i - 1] << " --> " << count << endl;
			count = 1;
		}
		else {
			count++;
		}
	}
	if (n == 1 || arr[n - 1] != arr[n - 2]) {
		cout << arr[n - 1] << " --> " << count << endl;
	}
}

//Check palindrome
bool checkPalindrome(string s, int start, int end) {

	if (start > end) {
		return true;
	}

	return (s[start] == s[end - 1])&&(checkPalindrome(s, start + 1, end - 1));
}

//Subset
void subset(string s, string cur="", int i = 0) {
	if (i == s.length()) {
		cout << cur << endl;
		return;
	}
	subset(s, cur, i + 1);
	subset(s, cur + s[i], i + 1);
}

int firstUniqChar(string s) {
	int n = s.length();
	vector<int> hash(26, 0);

	for (int i = 0; i < n; i++) {
		char ch = s[i] - 'a';
		hash[ch]++;
	}

	for (int i = 0; i < n; i++) {
		if (hash[s[i] - 'a'] == 1) {
			return i;
		}
	}

	return -1;
}
int main() {
	//for subset of string
	//subset("ABC");

	//bool ans = checkPalindrome("a",0,1);
	//cout << ans << endl;
	//int arr[14] = { 1, 1, 1, 2, 3, 3, 5, 5, 8, 8, 8, 9, 9, 10 };
	//freqInSortedArray(arr, 14);
	string s;
	cin >> s;
	cout << firstUniqChar(s);
	return 0;
}
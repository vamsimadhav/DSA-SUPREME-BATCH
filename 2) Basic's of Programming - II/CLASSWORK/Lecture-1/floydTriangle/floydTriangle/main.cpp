#include<iostream>
using namespace std;

/*

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

int main() {
	cout << "Enter the number of row" << endl;
	int n;
	cin >> n;
	int count = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << count << " ";
				count++;
		}
		cout << endl;
	}
}
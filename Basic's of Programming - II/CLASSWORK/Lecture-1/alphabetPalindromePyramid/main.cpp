#include<iostream>
using namespace std;

/*
A
A B A
A B C A B
A B C D A B C
A B C D E A B C D
*/

int main() {
	cout << "Enter the no of rows in pyramid" << endl;
	int n;
	cin >> n;
	char ch = 'A';
	for (int i = 0; i < n; i++) {
		char ans;
		for (int j = 0; j <= i; j++) {
			ans = j + ch;
			cout << ans << " ";
		}
		for (int k = i; k >0; k--) {
			if (ans != 'A') {
				char c = ans -k;
				cout << c << " ";
			}
		}

		cout << endl;
	}
	return 0;
}
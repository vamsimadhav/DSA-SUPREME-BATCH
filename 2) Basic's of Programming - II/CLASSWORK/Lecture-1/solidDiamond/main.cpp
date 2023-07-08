#include<iostream>
using namespace std;

int main() {
	cout << "Enter the size of Solid Diamond Pattern" << endl;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		//Print spaces
		int space = n - i;
		for (int j = space; j > 0; j--) {
			cout << " ";
		}

		//Printing Stars
		for (int j = 0; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	//Printing Downward triangle
	for (int i = 0; i < n; i++) {
		//Print spaces
		for (int j = 0; j<=i; j++) {
			cout << " ";
		}
		//Print stars
		for (int j = n-i; j > 0; j--) {
			cout << "* ";
		}
		cout << endl;
	}
	
	
	return 0;
}
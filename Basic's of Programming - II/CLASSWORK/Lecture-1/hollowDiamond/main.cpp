#include<iostream>
using namespace std;

int main() {
	cout << "Enter the size of Hollow Diamond" << endl;
	int n;
	cin >> n;

	//First Part
	for (int i = 0; i < n; i++) {
		//Print Spaces
		for (int j = 0; j < n - i; j++) {
			cout << " ";
		}
		//Print start
		cout << "*";
		
		cout << endl;
	}
	
	//third Part
	for (int i = 0; i < n; i++) {
		//Print Spaces
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		//Print start
		cout << " *";

		cout << endl;
	}
	return 0;
}
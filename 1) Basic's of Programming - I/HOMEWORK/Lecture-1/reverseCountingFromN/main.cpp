#include<iostream>
using namespace std;

int main() {
	cout << "Enter the Num " << endl;
	int num;
	cin >> num;

	for (int i = num; i >= 1; i--) {
		cout << "The num is : " << i << endl;
	}
	return 0;
}
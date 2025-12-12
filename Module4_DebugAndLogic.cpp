#include <iostream>

using namespace std;

int main() {

	float n1, n2, n3;
	cout << "Enter three numbers: ";
	cin >> n1 >> n2 >> n3;

	// Determine the largest number

	// Compare n1 with n2 and n3
	if (n1 >= n2) {
		if (n1 >= n3) {
			cout << "The largest number is: " << n1 << endl;
		}
		else {
			cout << "The largest number is: " << n3 << endl;
		}
	}
	// n1 is not the largest, compare n2 with n3
	else {
		if (n2 >= n3) {
			cout << "The largest number is: " << n2 << endl;
		}
		else {
			cout << "The largest number is: " << n3 << endl;
		}
	}
	return 0;
}
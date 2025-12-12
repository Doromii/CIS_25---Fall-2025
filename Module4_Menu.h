#include <iostream>

using namespace std;

int main() {
	
	int choice;
	cout << "Please choose a drink: " << endl;
	cout << "1. Soda\n2. Ginger Ale\n3. Water" << endl;
	
	cin >> choice;
	
	if (choice == 1) {
		cout << "You selected Soda." << endl;
	}
	else if (choice == 2) {
		cout << "You selected Ginger Ale." << endl;
	}
	else if (choice == 3) {
		cout << "You selected Water." << endl;
	}
	else {
		cout << "Invalid input." << endl;
	}
	cout << "Closing program.\nThank you." << endl;
	return 0;
}

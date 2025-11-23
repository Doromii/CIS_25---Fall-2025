// Week 5 - Module 11: Advanced Classes - Constructors & Destructors

#include <iostream>

using namespace std;

class Product {		// Class
	// Private attributes
	int id;
	string name;
	float price;
public:
	// Constructor - initializes values
	Product(int i, string n, float p) : id(i), name(n), price(p) {
		cout << "Constructor called\n";
	};
	// Destructor
	~Product() {
		cout << "Destructor called\n";
	}
	// Display product information
	void printDetails() {
		cout << "ID: " << id << ", Name: " << name << ", Price: $" << price << endl;
	}
};

int main() {

	Product p(201, "A History of the World", 49.99);
	p.printDetails();

	return 0;
}

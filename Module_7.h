#include <iostream>
#include <string>
#include <array>
#include <algorithm> // to sort array

using namespace std;


// Define struct named 'Item'
struct Item {
	string name;	// string item's name
	int id;			// integer for item's ID number
};

// Binary Search function
int binarySearch(Item* array, int size, int targetID) {
	int lowNum = 0;			// set low number to first index 0
	int highNum = size - 1;	// set high number to size of array minus 1

	int midpoint;	// clear a variable for midpoint

	while (lowNum <= highNum) {				// as long as low is less than or equal to high
		midpoint = ((lowNum + highNum) / 2);	//integer division: truncates fraction part

		if (targetID == array[midpoint].id) {
			return midpoint;
		} else if (targetID > array[midpoint].id) {
			lowNum = midpoint + 1;	// moving low point
		} else {
			highNum = midpoint - 1; // moving high point
		}
	}
	return -1;	// return if item is not found
}


int main() {

	// size of the array
	const int size = 100; 

	// dynamically allocate an array called "items"
	Item* items = new Item[size];
	
	// temporary array of item names 
	string itemNameArr[size];

	// Populate array with data
	for (int i = 0; i < size; i++) {
		itemNameArr[i] = "Name_" + to_string(i); //append each item name with an int number
	//	cout << itemNameArr[i] << endl;		// checking populated array
	}
	
	// sort names of elements in array 
	sort(itemNameArr, itemNameArr + 1);

	// Populate dynamically allocated items
	for (int i = 0; i < size; i++) {
		items[i].name = itemNameArr[i];		// assign item name to each element in array
		items[i].id = 1000 + i;				// first item id is 1000, then 1001, then 1002... etc
	//	cout << items[i].name;					// check item name
	//	cout << " - " << items[i].id << endl;	// check associated item id
	}

	// user search via item ID
	int userSearchID;
	cout << "Enter an item ID to search: ";
	cin >> userSearchID;

	// use binary search function
	int indexNum = binarySearch(items, size, userSearchID);

	// output results
	if ((indexNum != -1) && (indexNum <= 99)) {
		cout << "Item found." << endl;
		cout << "Item ID: " << items[indexNum].id << endl;
		cout << "Item name: " << items[indexNum].name << endl;
	} else {
		cout << "Item ID " << userSearchID << " not found." << endl;
	}

	// free memory
	delete[] items;
	return 0;
}

	

	

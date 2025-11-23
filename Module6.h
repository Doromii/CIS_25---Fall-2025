// Week 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream> // a class that can read and write to files
#include <string>

using namespace std;

class schoolSupplies {      // The class (user-deined data type)
public:                     // Access specifier - makes members of your class accessible outside of class
    string name;            // Attribute (string variable)
    int quantity;           // Attribute (int variable)



    // Save item to txt file
    void saveToFile() {
        ofstream out("items.txt"); // ofstream: class that can write to files
        if (out.is_open()) {
            out << name << ", " << "qty: " << quantity << endl;
            out.close();
            cout << "Item saved to file." << endl;
        }
        else {
            cout << "Unable to open file for writing." << endl;
        }
    }

    // Load from txt file
    void loadFromFile() {
        ifstream in("items.txt", ios::in);  // ifstream: a class that can read from files
        if (in.is_open()) {
            string line;
            while (getline(in, line)) {
                cout << "School supply: " << line << endl;
            }
            in.close();
        }
        else {
            cout << "Unable to open file for reading." << endl;
        }
    }
};

int main() {

    schoolSupplies pencil;
    // Attributes and set values
    pencil.name = "Pencils";
    pencil.quantity = 5;

    pencil.saveToFile();
    pencil.loadFromFile();

    schoolSupplies paper;
    paper.name = "Paper";
    paper.quantity = 15;

    paper.saveToFile();
    paper.loadFromFile();

    return 0;

}

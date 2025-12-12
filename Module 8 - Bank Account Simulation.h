#include <iostream>
#include <fstream> //read from and write to files
#include <string>

using namespace std;

class BankAccount {
private:
	double balance;
public:
	// constructor - initialize balance in account
	BankAccount() {
		balance = 0.0;
	}
	// add to account
	void makeDeposit(double amount) {
		balance += amount;
		cout << "A deposit of $ " << amount << " was added." << endl;
		saveTransaction("Deposit amount", amount);
	}
	// subtract from account depending on available funds
	void makePurchase(string item, double price) {
		if (balance < price) {
			cout << "Insufficient funds for purchase of " << item << "." << endl;
		}
		else {
			balance -= price;
			cout << "Purchased " << item << " for $" << price << "." << endl;
			saveTransaction("Purchased " + item, price);
		}
	}
	// write deposits and purchases to file
	void saveTransaction(string type, double amount) {
		// ios::app adds text to end of file, appends to current content of file
		ofstream txtFile("myTransactions.txt", ios::app);
		if (txtFile.is_open()) {
			txtFile << type << ": $" << amount << endl;
			txtFile.close();
		}
	}
	// prints account balance
	void printBalance() {
		cout << "Current balance of $" << balance << "." << endl;
	}
};


int main() {

	// create bank account object
	BankAccount myAccount;

	// Add an initial deposit
	myAccount.makeDeposit(100.00);
	// Make two purchases
	myAccount.makePurchase("textbook", 50.00);
	myAccount.makePurchase("lunch", 18.00);
	// Test for if else statement
	myAccount.makePurchase("computer monitor", 150.00);
	// display final balance
	myAccount.printBalance();

	return 0;
}
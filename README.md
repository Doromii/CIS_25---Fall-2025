# CIS_25 - Fall 2025
 Programming Using C++
 
 Week 8

---------------
This program is a bank account simulator.
A BankAccount class has methods for depositing funds, making purchases, and showing the final balance. There are test transactions made to check if code works as it should.


An account (myAccount) is created as an instance of the class BankAccount, with a starting balance of $0.00
A deposit of $100 is made, so the program adds it to the balance and notifies the user that a deposit was made. This deposit is recorded onto a text file (myTransactions.txt).
Three purchases are simulated, the last of which will be denied. The program takes the name of an item and how much it costs. Using an if-else statement, the program checks to see whether the account has enough funds in order to make the purchase. If the item can be and is purchased, it is recorded as a purchase transaction in the text file. If not, the account holder is notified that there are insufficient funds.
After the transactions are made, the program prints the final account balance.
 

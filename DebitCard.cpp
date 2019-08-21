/*
DebitCard();
	~DebitCard();

	double Deposit(double deposit);				// used to add money to the DebitCard. Returns current ballance
	double PostTransaction(int idNumber, std::string date, std::string description, double amount); // adds a new transaction to the transactions array. Returns account balance
	bool ClearTransaction(int idNumber);	// marks the pending transaction in the transactions array as "cleared"
	void DisplayActivity();					// properly displays the DebitCard data to the console screen

	int totalTransactions;	// number of transactions posted for this DebitCard
	double accountBalance;	// amount of money still in the account for this DebitCard
	double totalDeposits;	// total amount of money added to this DebitCard
private:
	DynamicArray transactions;
*/
#include <string>
#include <iostream>
#include "DebitCard.h"
#include "DynamicArray.h"
#include "Transaction.h"
using namespace std;

DebitCard::DebitCard() {
    
} //seems legit
DebitCard::~DebitCard();

double DebitCard::Deposit(double deposit) {
    accountBalance += deposit;
    return accountBalance;
}
double DebitCard::PostTransaction(int idNumber, std::string date, std::string description, double amount) {
    Transaction transaction(int idNumber, std::string date, std::string description, double amount);
    
    return accountBalance;
}








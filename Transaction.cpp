/*
public:
	Transaction() = default;
	Transaction(int transactionID, std::string date, std::string description, double amount);

	int idNumber;		// unique identification number of the transaction
	std::string date;	// date of the transaction i.e. "08/17/2018"
	std::string description;	// where was the transaction made
	double amount;		// amount of transaction
	bool cleared;		// has the transaction been "cleared"
*/
#include "Transaction.h"
using namespace std;

Transaction::Transaction(int transactionID, std::string date, std::string description, double amount) {
   idNumber = transactionID;
   this->date = date;
   this->description = description;
   this->amount = amount;
   cleared = false;
}
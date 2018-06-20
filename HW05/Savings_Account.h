#ifndef SAVINGS_ACCOUNT_H_
#define SAVINGS_ACCOUNT_H_
#include "Account.h"

class Savings_Account : public Account
{
public:

	// Constructor
	Savings_Account(Customer *cust, int id) : Account(cust, id) {}

	void deposit(double amt)
	{
		balance += amt;
		std::string fees = get_fees();
		Transaction *tran = new Transaction(get_account(), "Deposit", amt, get_fees());
		transactions.push_back(tran);
	}

	void withdraw(double amt)
	{
		balance -= amt;
		std::string fees = get_fees();
		Transaction *tran = new Transaction(get_account(), "Withdraw", amt, get_fees());
		transactions.push_back(tran);
	}

	void add_interest()
	{

	}

	std::string to_string() {
		std::stringstream ss; // for composing the string that describes this account

		ss << "Account type: Checking" << std::endl;
		ss << "	Name: " << customer->getName() << std::endl;
		ss << "	Telephone number: " << customer->getTelephone_number() << std::endl;
		ss << "	Address: " << customer->getAddress() << std::endl;
		ss << "  Balance: " << balance << std::endl;
		ss << "  Account ID: " << account_number << std::endl;
		return ss.str();
	}
};

#endif
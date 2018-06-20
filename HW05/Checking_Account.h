#ifndef CHECKING_ACCOUNT_H_
#define CHECKING_ACCOUNT_H_
#include "Account.h"

class Checking_Account : public Account
{
public:

	void deposit(double amt)
	{
		balance += amt;
		std::string fees = get_fees();
		Transaction *tran = new Transaction(std::stoi(get_fees()), "Deposit", amt, "A");
		transactions.push_back(tran);
	}

	void whithdraw(double amt)
	{
		balance -= amt;
		std::string fees = get_fees();
		Transaction *tran = new Transaction(std::stoi(get_fees()), "Withdraw", amt, "A");
		transactions.push_back(tran);
	}

	void add_interest()
	{

	}
};

#endif
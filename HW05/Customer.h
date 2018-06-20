#ifndef CUSTOMER_H_
#define CUSTOMER_H_
#include <string>

/**
The Bank has Customers.  Each Customer has a name, address, age, and telephone number.
Additionally, there are specialized types of Customers: Adult, Senior, and Student.
Each type of Customer has its own checking and savings interest rates, 
as well as its own checking and overdraft fees.

@author: Ed Walker
*/
class Customer // FIXME: Complete the implementation!
{

private:

	std::string name;
	std::string address;
	int age;
	std::string telephone_number;
	std::string customer_number;

public:

	// Accessors

	std::string getName() { return name; }
	std::string getAddress() { return address; }
	int getAge() { return age; }
	std::string getTelephone_number() { return telephone_number; }
	std::string getCustomer_number() { return customer_number; }
	virtual int getSavings_Interest() = 0;
	virtual int getCheck_Interest() = 0;
	virtual int getCheck_Charge() = 0;
	virtual int getOverdraft_Penalty() = 0;

	// Mutators

	void setName(std::string _name) { name = _name; }
	void setAddress(std::string _address) { address = _address; }
	void setAge(int _age) { age = _age; }
	void setTelephone_Number(std::string _telephone_number) { telephone_number = _telephone_number; }
	void setCustomer_Number(std::string _customer_number) { customer_number = _customer_number; }

};

class Senior : public Customer
{
private:

	int savings_interest;
	int check_interest;
	int check_charge;
	int overdraft_penalty;

public:

	// Accessor

	int getSavings_Interest() { return savings_interest; }
	int getCheck_Interest() { return check_interest; }
	int getCheck_Charge() { return check_charge; }
	int getOverdraft_Penalty() { return overdraft_penalty; }
};

class Adult : public Customer
{
private:

	int savings_interest;
	int check_interest;
	int check_charge;
	int overdraft_penalty;

public:

	// Accessor

	int getSavings_Interest() { return savings_interest; }
	int getCheck_Interest() { return check_interest; }
	int getCheck_Charge() { return check_charge; }
	int getOverdraft_Penalty() { return overdraft_penalty; }
};

class Student : public Customer
{
private:

	int savings_interest;
	int check_interest;
	int check_charge;
	int overdraft_penalty;

public:

	// Accessor

	int getSavings_Interest() { return savings_interest; }
	int getCheck_Interest() { return check_interest; }
	int getCheck_Charge() { return check_charge; }
	int getOverdraft_Penalty() { return overdraft_penalty; }
};




#endif
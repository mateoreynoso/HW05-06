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
	std::string age;
	std::string telephone_number;
	std::string customer_number;

public:

	// Accessors

	std::string getName() { return name; }
	std::string getAddress() { return address; }
	std::string getAge() { return age; }
	std::string getTelephone_number() { return telephone_number; }
	std::string getCustomer_number() { return customer_number; }

	// Mutators

	void setName(std::string _name) { name = _name; }
	void setAddress(std::string _address) { address = _address; }
	void setAge(std::string _age) { age = _age; }
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
};

class Adult : public Customer
{
private:

	int savings_interest;
	int check_interest;
	int check_charge;
	int overdraft_penalty;
};

class Student : public Customer
{
private:

	int savings_interest;
	int check_interest;
	int check_charge;
	int overdraft_penalty;
};




#endif
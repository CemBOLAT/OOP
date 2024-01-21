#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include <string>

class CommissionEmployee
{
public:
	// Constructor
	CommissionEmployee(const std::string &firstName, const std::string &lastName,
					   const std::string &socialSecurityNumber,
					   double grossSales = 0.0, double commissionRate = 0.0);

	// Setter and Getter for First Name
	void setFirstName(const std::string &firstName);
	std::string getFirstName() const;

	// Setter and Getter for Last Name
	void setLastName(const std::string &lastName);
	std::string getLastName() const;

	// Setter and Getter for Social Security Number
	void setSocialSecurityNumber(const std::string &ssn);
	std::string getSocialSecurityNumber() const;

	// Setter and Getter for Gross Sales
	void setGrossSales(double grossSales);
	double getGrossSales() const;

	// Setter and Getter for Commission Rate
	void setCommissionRate(double commissionRate);
	double getCommissionRate() const;

	// Calculate Earnings
	double earnings() const;

	// Print CommissionEmployee information
	void print() const;

private:
	std::string firstName;
	std::string lastName;
	std::string socialSecurityNumber;
	double grossSales;	   // gross weekly sales
	double commissionRate; // commission percentage
};

#endif // COMMISSIONEMPLOYEE_H

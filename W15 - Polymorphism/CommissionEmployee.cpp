#include <iostream>
#include "CommissionEmployee.h"

// Constructor
CommissionEmployee::CommissionEmployee(
	const std::string &first, const std::string &last,
	const std::string &ssn, double sales, double rate)
	: firstName(first), lastName(last), socialSecurityNumber(ssn)
{
	setGrossSales(sales);	 // validate and store gross sales
	setCommissionRate(rate); // validate and store commission rate
}

// Set first name
void CommissionEmployee::setFirstName(const std::string &first)
{
	firstName = first; // should validate
}

// Get first name
std::string CommissionEmployee::getFirstName() const
{
	return firstName;
}

// Set last name
void CommissionEmployee::setLastName(const std::string &last)
{
	lastName = last; // should validate
}

// Get last name
std::string CommissionEmployee::getLastName() const
{
	return lastName;
}

// Set social security number
void CommissionEmployee::setSocialSecurityNumber(const std::string &ssn)
{
	socialSecurityNumber = ssn; // should validate
}

// Get social security number
std::string CommissionEmployee::getSocialSecurityNumber() const
{
	return socialSecurityNumber;
}

// Set gross sales amount
void CommissionEmployee::setGrossSales(double sales)
{
	grossSales = (sales < 0.0) ? 0.0 : sales;
}

// Get gross sales amount
double CommissionEmployee::getGrossSales() const
{
	return grossSales;
}

// Set commission rate
void CommissionEmployee::setCommissionRate(double rate)
{
	commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
}

// Get commission rate
double CommissionEmployee::getCommissionRate() const
{
	return commissionRate;
}

// Calculate earnings
double CommissionEmployee::earnings() const
{
	return getCommissionRate() * getGrossSales();
}

// Print CommissionEmployee object
void CommissionEmployee::print() const
{
	std::cout << "Commission employee: "
			  << getFirstName() << ' ' << getLastName()
			  << "\nSocial security number: " << getSocialSecurityNumber()
			  << "\nGross sales: " << getGrossSales()
			  << "\nCommission rate: " << getCommissionRate();
}

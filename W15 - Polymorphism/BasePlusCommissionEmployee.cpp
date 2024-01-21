#include <iostream>
#include "BasePlusCommissionEmployee.h"

// constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
	const std::string &first, const std::string &last, const std::string &ssn,
	double sales, double rate, double salary)
	: CommissionEmployee(first, last, ssn, sales, rate)
{
	setBaseSalary(salary); // validate and store base salary
}

// set base salary
void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
	baseSalary = (salary < 0.0) ? 0.0 : salary;
}

// return base salary
double BasePlusCommissionEmployee::getBaseSalary() const
{
	return baseSalary;
}

// calculate earnings
double BasePlusCommissionEmployee::earnings() const
{
	return getBaseSalary() + CommissionEmployee::earnings();
}

// print BasePlusCommissionEmployee object
void BasePlusCommissionEmployee::print() const
{
	std::cout << "base-salaried ";

	// invoke CommissionEmployee's print function
	CommissionEmployee::print();

	std::cout << "\nbase salary: " << getBaseSalary();
}

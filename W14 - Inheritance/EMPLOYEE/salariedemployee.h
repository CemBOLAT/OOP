#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include <string>
#include "employee.h"
using std::string;

namespace SavitchEmployees
{

	class SalariedEmployee : public Employee
	{
	public:
		// Constructors
		SalariedEmployee();
		SalariedEmployee(const string &theName, const string &theSsn, double theWeeklySalary);

		// Member functions specific to SalariedEmployee
		double getSalary() const;
		void setSalary(double newSalary);
		void printCheck();

	private:
		// Additional member variable for SalariedEmployee
		double salary; // weekly
	};

} // namespace SavitchEmployees

#endif // SALARIEDEMPLOYEE_H

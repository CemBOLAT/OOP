#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include <string>
#include "employee.h"
using std::string;

namespace SavitchEmployees
{

	class HourlyEmployee : public Employee
	{
	public:
		// Constructors
		HourlyEmployee();
		HourlyEmployee(const string &theName, const string &theSsn, double theWageRate, double theHours);

		// Member functions specific to HourlyEmployee
		void setRate(double newWageRate);
		double getRate() const;
		void setHours(double hoursWorked);
		double getHours() const;
		void printCheck();

	private:
		// Additional member variables for HourlyEmployee
		double wageRate;
		double hours;
	};

} // namespace SavitchEmployees

#endif // HOURLYEMPLOYEE_H

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using std::string;

namespace SavitchEmployees
{

	class Employee
	{
	public:
		// Constructors
		Employee();
		Employee(const string &theName, const string &theSsn);

		// Member functions
		string getName() const;
		string getSsn() const;
		double getNetPay() const;
		void setName(const string &newName);
		void setSsn(const string &newSsn);
		void setNetPay(double newNetPay);
		void printCheck() const;

	private:
		// Member variables
		string name;
		string ssn;
		double netPay;
	};

} // namespace SavitchEmployees

#endif // EMPLOYEE_H

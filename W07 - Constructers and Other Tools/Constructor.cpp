#include <iostream>

/*
	A constructor is a member function of a class that has the same name as the class. A
	constructor is called automatically when an object of the class is declared. Constructors are
	used to initialize objects. A constructor must have the same name as the class of which it
	is a member.

*/
class DayOfYear
{
public:
	DayOfYear(int monthValue, int dayValue); // constructers called when object is created
	DayOfYear(); // default constructor

	// Initializes the month and day to arguments.
	//void input();
	//void output();
	//void set(int newMonth, int newDay);
	//void set(int newMonth);
	//int getMonthNumber();
	//int getDay();

private:
	int month;
	int day;
};

DayOfYear::DayOfYear(int monthValue, int dayValue) : month(monthValue), day(dayValue)
{
	//body intentionally empty
}

DayOfYear::DayOfYear() : month(1), day(1)
{
	//body intentionally empty
}

int main()
{
	DayOfYear christmas(12, 25);
	DayOfYear newYearsDay(1, 1);
	DayOfYear defaultDay;
	//DayOfYear date3(); // PROBLEM! Not what you might think it is.

	return 0;
}

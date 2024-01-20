// dtime.cpp
#include "dtime.h"
#include <iostream>
#include <cctype>
#include <cstdlib>

namespace
{
	int digitToInt(char c)
	{
		return (int(c) - int('0'));
	}

	void readMinute(int &theMinute)
	{
		char c1, c2;
		cin >> c1 >> c2;

		// Check if the input format is valid (two digits)
		if (!(isdigit(c1) && isdigit(c2)))
		{
			cout << "Error: illegal input to readMinute\n";
			exit(1);
		}

		// Parse the minute and validate its range
		theMinute = digitToInt(c1) * 10 + digitToInt(c2);
		if (theMinute < 0 || theMinute > 59)
		{
			cout << "Error: illegal input to readMinute\n";
			exit(1);
		}
	}

	void readHour(int &theHour)
	{
		char c1, c2;
		cin >> c1 >> c2;

		// Check if the input format is valid (digit followed by optional ':' character)
		if (!(isdigit(c1) && (isdigit(c2) || c2 == ':')))
		{
			cout << "Error: illegal input to readHour\n";
			exit(1);
		}

		// Parse the hour based on the input format
		if (isdigit(c1) && c2 == ':')
		{
			theHour = digitToInt(c1);
		}
		else //(isdigit(c1) && isdigit(c2))
		{
			theHour = digitToInt(c1) * 10 + digitToInt(c2);
			cin >> c2; // discard ':'
			if (c2 != ':')
			{
				cout << "Error: illegal input to readHour\n";
				exit(1);
			}
		}

		// Standardize midnight as 0:00
		if (theHour == 24)
			theHour = 0;

		// Validate the hour value
		if (theHour < 0 || theHour > 23)
		{
			cout << "Error: illegal input to readHour\n";
			exit(1);
		}
	}
} // unnamed namespace

namespace DTimeSavitch
{
	istream &operator>>(istream &ins, DigitalTime &theObject)
	{
		readHour(theObject.hour);
		readMinute(theObject.minute);
		return ins;
	}

	ostream &operator<<(ostream &outs, const DigitalTime &theObject)
	{
		outs << theObject.hour << ':';
		if (theObject.minute < 10)
			outs << '0';
		outs << theObject.minute;
		return outs;
	}

	bool operator==(const DigitalTime &time1, const DigitalTime &time2)
	{
		return (time1.hour == time2.hour && time1.minute == time2.minute);
	}

	DigitalTime::DigitalTime(int theHour, int theMinute) : hour(theHour), minute(theMinute)
	{
		// Additional validation or adjustments can be done here
	}

	DigitalTime::DigitalTime() : hour(0), minute(0)
	{
		// Default constructor sets the time to midnight
	}

	int DigitalTime::getHour() const
	{
		return hour;
	}

	int DigitalTime::getMinute() const
	{
		return minute;
	}

	void DigitalTime::advance(int minutesAdded)
	{
		minute += minutesAdded;
		hour += minute / 60;
		minute %= 60;
		hour %= 24;
	}

	void DigitalTime::advance(int hoursAdded, int minutesAdded)
	{
		hour += hoursAdded;
		advance(minutesAdded);
	}
} // DTimeSavitch

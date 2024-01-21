#include <iostream>
#include <cstdlib> // For exit()

class DayOfYear {
	private:
		int month;
		int day;
	
	public:
		void input();
		void output();
		void set(int newMonth, int newDay);
		void set(int newMonth);
		int getMonthNumber();
		int getDay();
};

void DayOfYear::set(int newMonth, int newDay) {
	if (newMonth >= 1 && newMonth <= 12)
		month = newMonth;
	else {
		std::cout << "Illegal month value! Program aborted.\n";
		exit(1);
	}

	if (newDay >= 1 && newDay <= 31)
		day = newDay;
	else {
		std::cout << "Illegal day value! Program aborted.\n";
		exit(1);
	}
}

void DayOfYear::set(int newMonth) {
	if (newMonth >= 1 && newMonth <= 12)
		month = newMonth;
	else {
		std::cout << "Illegal month value! Program aborted.\n";
		exit(1);
	}

	day = 1;
}

int DayOfYear::getMonthNumber() {
	return month;
}

int DayOfYear::getDay() {
	return day;
}

void DayOfYear::input() {
	std::cout << "Enter the month as a number: ";
	std::cin >> month;
	std::cout << "Enter the day of the month: ";
	std::cin >> day;

	if (month < 1 || month > 12 || day < 1 || day > 31) {
		std::cout << "Illegal date! Program aborted.\n";
		exit(1);
	}
}

void DayOfYear::output() {
	switch (month) {
		case 1: std::cout << "January "; break;
		case 2: std::cout << "February "; break;
		case 3: std::cout << "March "; break;
		case 4: std::cout << "April "; break;
		case 5: std::cout << "May "; break;
		case 6: std::cout << "June "; break;
		case 7: std::cout << "July "; break;
		case 8: std::cout << "August "; break;
		case 9: std::cout << "September "; break;
		case 10: std::cout << "October "; break;
		case 11: std::cout << "November "; break;
		case 12: std::cout << "December "; break;
		default: std::cout << "Error in DayOfYear::output.";
	}

	std::cout << day;
}

int main() {
	DayOfYear today, bachBirthday;

	std::cout << "Enter today's date:\n";
	today.input();

	std::cout << "Today's date is ";
	today.output();
	std::cout << std::endl;

	bachBirthday.set(3, 21);
	std::cout << "J. S. Bach's birthday is ";
	bachBirthday.output();
	std::cout << std::endl;

	if (today.getMonthNumber() == bachBirthday.getMonthNumber() && today.getDay() == bachBirthday.getDay())
		std::cout << "Happy Birthday Johann Sebastian!\n";
	else
		std::cout << "Happy Unbirthday Johann Sebastian!\n";

	return 0;
}

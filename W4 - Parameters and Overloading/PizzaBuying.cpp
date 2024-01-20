#include <iostream>
using namespace std;

// Function to calculate the unit price for a round pizza
double unitPrice(int diameter, double price)
{
	const double PI = 3.14159;
	double radius = diameter / double(2);
	double area = PI * radius * radius;
	return (price / area);
}

// Function to calculate the unit price for a rectangular pizza
double unitPrice(int length, int width, double price)
{
	double area = length * width;
	return (price / area);
}

int main()
{
	int diameter, length, width;
	double priceRound, unitPriceRound, priceRectangular, unitPriceRectangular;

	cout << "Welcome to the Pizza Consumers Union.\n";

	// Input for round pizza
	cout << "Enter the diameter in inches of a round pizza: ";
	cin >> diameter;
	cout << "Enter the price of a round pizza: $";
	cin >> priceRound;

	// Input for rectangular pizza
	cout << "Enter length and width in inches of a rectangular pizza: ";
	cin >> length >> width;
	cout << "Enter the price of a rectangular pizza: $";
	cin >> priceRectangular;

	// Calculate unit prices
	unitPriceRectangular = unitPrice(length, width, priceRectangular);
	unitPriceRound = unitPrice(diameter, priceRound);

	// Output results
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << endl
		 << "Round pizza: Diameter = " << diameter << " inches\n"
		 << "Price = $" << priceRound << " Per square inch = $" << unitPriceRound << endl
		 << "Rectangular pizza: Length = " << length << " inches\n"
		 << "Rectangular pizza: Width = " << width << " inches\n"
		 << "Price = $" << priceRectangular << " Per square inch = $" << unitPriceRectangular << endl;

	// Determine the better buy
	if (unitPriceRound < unitPriceRectangular)
		cout << "The round one is the better buy.\n";
	else
		cout << "The rectangular one is the better buy.\n";

	cout << "Buon Appetito!\n";
	return 0;
}

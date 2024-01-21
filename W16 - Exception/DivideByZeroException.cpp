// Fig. 16.2: Fig16_02.cpp
// A simple exception-handling example that checks for
// divide-by-zero exceptions.
#include <iostream>
#include "DivideByZeroException.h"

using std::cin;
using std::cout;
using std::endl;

// Perform division and throw DivideByZeroException object if
// divide-by-zero exception occurs
double quotient(int numerator, int denominator)
{
	// Throw DivideByZeroException if trying to divide by zero
	if (denominator == 0)
		throw DivideByZeroException(); // Terminate function

	// Return division result
	return static_cast<double>(numerator) / denominator;
}

int main()
{
	int number1;   // User-specified numerator
	int number2;   // User-specified denominator
	double result; // Result of division

	cout << "Enter two integers (end-of-file to end): ";

	// Enable user to enter two integers to divide
	while (cin >> number1 >> number2)
	{
		// Try block contains code that might throw exception
		// and code that should not execute if an exception occurs
		try
		{
			result = quotient(number1, number2);
			cout << "The quotient is: " << result << endl;
		} // End try
		// Exception handler handles a divide-by-zero exception
		catch (DivideByZeroException &divideByZeroException)
		{
			cout << "Exception occurred: " << divideByZeroException.what() << endl;
		} // End catch

		cout << "\nEnter two integers (end-of-file to end): ";
	} // End while

	cout << endl;
	return 0; // Terminate normally
} // End main

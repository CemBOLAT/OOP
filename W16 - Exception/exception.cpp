// Fig. 16.3: Fig16_03.cpp
// Demonstrating exception rethrowing.
#include <iostream>
#include <exception>

using std::cout;
using std::endl;
using std::exception;

// Throw, catch, and rethrow exception
void throwException()
{
	// Throw exception and catch it immediately
	try
	{
		cout << " Function throwException throws an exception\n";
		throw exception(); // Generate exception
	}					   // End try
	catch (const exception &)
	{ // Handle exception
		cout << " Exception handled in function throwException"
			 << "\n Function throwException rethrows exception";
		throw; // Rethrow exception for further processing
	}		   // End catch

	cout << "This also should not print\n";
} // End function throwException

int main()
{
	// Throw exception
	try
	{
		cout << "\nmain invokes function throwException\n";
		throwException();
		cout << "This should not print\n";
	} // End try
	catch (const exception &)
	{ // Handle exception
		cout << "\n\nException handled in main\n";
	} // End catch

	cout << "Program control continues after catch in main\n";
	return 0;
} // End main

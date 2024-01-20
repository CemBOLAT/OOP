// Fig. 16.4: Fig16_04.cpp
// Demonstrating stack unwinding.
#include <iostream>
#include <stdexcept>

using std::cout;
using std::endl;
using std::runtime_error;

// Function3 throws run-time error
void function3() throw(runtime_error)
{
	cout << "In function3" << endl;

	// No try block, stack unwinding occurs, return control to function2
	throw runtime_error("runtime_error in function3");
}

// Function2 invokes function3
void function2() throw(runtime_error)
{
	cout << "function3 is called inside function2" << endl;
	function3(); // Stack unwinding occurs, return control to function1
}

// Function1 invokes function2
void function1() throw(runtime_error)
{
	cout << "function2 is called inside function1" << endl;
	function2(); // Stack unwinding occurs, return control to main
}

// Demonstrate stack unwinding
int main()
{
	// Invoke function1
	try
	{
		cout << "function1 is called inside main" << endl;
		function1(); // Call function1 which throws runtime_error
	}				 // End try
	catch (runtime_error &error)
	{ // Handle run-time error
		cout << "Exception occurred: " << error.what() << endl;
		cout << "Exception handled in main" << endl;
	} // End catch

	return 0;
} // End main

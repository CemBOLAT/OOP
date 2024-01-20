// Fig. 16.6: Fig16_06.cpp
// Demonstrating standard new throwing bad_alloc when memory
// cannot be allocated.
#include <iostream>
#include <new> // Standard operator new

using std::bad_alloc;
using std::cerr;
using std::cout;
using std::endl;

int main()
{
	double *ptr[50];

	// Allocate memory for ptr
	try
	{
		// Allocate memory for ptr[i]; new throws bad_alloc on failure
		for (int i = 0; i < 50; i++)
		{
			ptr[i] = new double[50000000]; // May throw exception
			cout << "Allocated 50000000 doubles in ptr[" << i << "]\n";
		} // End for
	}	  // End try

	// Handle bad_alloc exception
	catch (bad_alloc &memoryAllocationException)
	{
		cerr << "Exception occurred: " << memoryAllocationException.what() << endl;
	} // End catch

	return 0;
} // End main

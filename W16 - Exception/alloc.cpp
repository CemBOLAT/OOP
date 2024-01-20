// Fig. 16.5: Fig16_05.cpp
// Demonstrating pre-standard new returning 0 when memory
// is not allocated.
#include <iostream>

using std::cerr;
using std::cout;

int main()
{
	double *ptr[50];

	// Allocate memory for ptr
	for (int i = 0; i < 50; i++)
	{
		ptr[i] = new double[50000000];

		if (ptr[i] == nullptr)
		{ // Did new fail to allocate memory
			cerr << "Memory allocation failed for ptr[" << i << "]\n";
			break;
		}
		else
		{ // Successful memory allocation
			cout << "Allocated 50000000 doubles in ptr[" << i << "]\n";
		}
	} // End for

	return 0;
} // End main

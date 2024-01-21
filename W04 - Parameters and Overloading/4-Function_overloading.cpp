#include <iostream>

// Function with two integer parameters
int add(int a, int b)
{
	std::cout << "add(int a, int b) : ";
	return a + b;
}

// error: functions that differ only in their return type cannot be overloaded
/*
int add(const int a, const int b)
{
	return a + b;
}
*/
// no compiler error but using the upper function
/*
int add(int &a, int &b)
{
	std::cout << "add(int &a, int &b) : ";
	return a + b;
}
*/

// Overloaded function with three integer parameters
int add(int a, int b, int c)
{
	return a + b + c;
}

// Overloaded function with two double parameters
double add(double a, double b)
{
	return a + b;
}


int main()
{
	// Call the overloaded functions
	std::cout << "Sum of 2 and 3: " << add(2, 3) << std::endl;
	std::cout << "Sum of 2 and 3: " << add(2, 3) << std::endl;
	std::cout << "Sum of 2, 3, and 4: " << add(2, 3, 4) << std::endl;
	std::cout << "Sum of 2.5 and 3.5: " << add(2.5, 3.5) << std::endl;

	return 0;
}

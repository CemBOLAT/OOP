#include <iostream>
#include <iomanip> // Include this header for formatting options

int main()
{
	std::cout.setf(std::ios::fixed);
	std::cout.setf(std::ios::showpoint);
	std::cout.precision(2);

	double value = 123.456789;
	std::cout << "Formatted value: " << value << std::endl;

	return 0;
}

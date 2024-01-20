#include <iostream>

int main()
{
	auto x = 5;	   // x is deduced as int
	auto y = 3.14; // y is deduced as double

	std::cout << "x: " << x << ", y: " << y << std::endl;

	return 0;
}

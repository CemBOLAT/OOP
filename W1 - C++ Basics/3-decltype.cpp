#include <iostream>

int main()
{
	int x = 42;
	decltype(x) y = 10; // y has the same type as x, which is int
	decltype(x + y) result = x + y; // result has the type of x + y, which is double

	std::cout << "y: " << y << std::endl;
	std::cout << "result: " << result << std::endl;

	return 0;
}

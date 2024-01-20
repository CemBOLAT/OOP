#include <iostream>

int main()
{
	int x = 1;
	std::cout << x << std::endl; // Output: 1

	{
		std::cout << x << std::endl; // Output: 1
		int x = 2;
		std::cout << x << std::endl; // Output: 2

		{
			std::cout << x << std::endl; // Output: 2
			int x = 3;
			std::cout << x << std::endl; // Output: 3
		}

		std::cout << x << std::endl; // Output: 2
	}

	std::cout << x << std::endl; // Output: 1

	return 0;
}

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> container;

	// Populate the vector with values 1 to 4
	for (int i = 1; i <= 4; i++)
		container.push_back(i);

	std::cout << "Here is what is in the container:\n";

	// Use iterators to print the original content
	for (auto p = container.begin(); p != container.end(); p++)
		std::cout << *p << " ";

	std::cout << std::endl;

	std::cout << "Setting entries to 0:\n";

	// Use iterators to set all entries to 0
	for (auto p = container.begin(); p != container.end(); p++)
		*p = 0;

	std::cout << "Container now contains:\n";

	// Use iterators to print the modified content
	for (auto p = container.begin(); p != container.end(); p++)
		std::cout << *p << " ";

	std::cout << std::endl;

	return 0;
}

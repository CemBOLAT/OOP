#include <iostream>
#include <list>

int main()
{
	std::list<int> listObject;

	// Populate the list with values 1 to 3
	for (int i = 1; i <= 3; ++i)
		listObject.push_back(i);

	std::cout << "List contains:\n";

	// Use iterators to print the original content
	for (auto iter = listObject.begin(); iter != listObject.end(); ++iter)
		std::cout << *iter << " ";
	std::cout << "\n\n";

	std::cout << "Setting all entries to 0:\n";

	// Use iterators to set all entries to 0
	for (auto iter = listObject.begin(); iter != listObject.end(); ++iter)
		*iter = 0;

	std::cout << "List now contains:\n";

	// Use iterators to print the modified content
	for (auto iter = listObject.begin(); iter != listObject.end(); ++iter)
		std::cout << *iter << " ";
	std::cout << "\n\n";

	return 0;
}

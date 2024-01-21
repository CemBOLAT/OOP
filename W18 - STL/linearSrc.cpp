#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<char> line;

	std::cout << "Enter a line of text:\n";
	char next;
	std::cin.get(next);

	while (next != '\n')
	{
		line.push_back(next);
		std::cin.get(next);
	}

	// Using the find function to locate the first occurrence of 'e'
	std::vector<char>::const_iterator where;
	where = std::find(line.begin(), line.end(), 'e');

	// Outputting characters before and after the first occurrence of 'e'
	std::vector<char>::const_iterator p;
	std::cout << "You entered the following before you entered your first line:\n";
	for (p = line.begin(); p != where; ++p)
		std::cout << *p;

	std::cout << "\nYou entered the following after that:\n";
	for (p = where; p != line.end(); ++p)
		std::cout << *p;

	std::cout << "\nEnd of demonstration.\n";
	return 0;
}

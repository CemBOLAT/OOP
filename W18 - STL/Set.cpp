#include <iostream>
#include <set>

int main()
{
	std::set<char> s;

	// Inserting characters into the set
	s.insert('A');
	s.insert('D');
	s.insert('D');
	s.insert('C');
	s.insert('C');
	s.insert('B');

	// Printing the contents of the set
	std::cout << "The set contains:\n";
	for (auto it = s.begin(); it != s.end(); ++it)
		std::cout << *it << " ";
	std::cout << "\n";

	// Checking if 'C' is present in the set
	std::cout << "Set contains 'C': ";
	if (s.find('C') == s.end())
		std::cout << "no\n";
	else
		std::cout << "yes\n";

	// Removing 'C' from the set
	std::cout << "Removing 'C'.\n";
	s.erase('C');

	// Printing the contents of the set after removal
	for (auto it = s.begin(); it != s.end(); ++it)
		std::cout << *it << " ";
	std::cout << "\n";

	// Checking if 'C' is present in the set after removal
	std::cout << "Set contains 'C': ";
	if (s.find('C') == s.end())
		std::cout << "no\n";
	else
		std::cout << "yes\n";

	return 0;
}

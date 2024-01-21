#include <iostream>
#include <set>

// Custom comparison function for sorting integers in descending order
bool compareIntegers(int a, int b)
{
	return a > b; // Change to a < b for ascending order
}

int main()
{
	// Declare a set of integers with custom sorting order using a function
	std::set<int, bool (*)(int, int)> descendingSet(&compareIntegers); // önemli !!

	// Insert elements into the set
	descendingSet.insert(5);
	descendingSet.insert(2);
	descendingSet.insert(8);
	descendingSet.insert(1);

	// Iterate and print the elements of the set
	for (const int &element : descendingSet)
	{
		std::cout << element << " ";
	}

	std::cout << "\n";

	return 0;
}

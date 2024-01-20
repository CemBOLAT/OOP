#include <iostream>
#include <vector>

// compiler error: cannot use a range-based for loop to iterate over a C-style array
// only working when array definition and base range loop are in the same scope.
//void printIntArray(const int numbers[], size_t size)
//{
//	for (const auto &number : numbers)
//	{
//		std::cout << number << " ";
//	}
//	std::cout << std::endl;
//}

// Function to print elements of a string vector using a for-range loop
void printStringVector(const std::vector<std::string> &strings)
{
	for (const auto &str : strings)
	{
		std::cout << str << " ";
	}
	std::cout << std::endl;
}

int main()
{
	// Example with an array
	int numbers[] = {1, 2, 3, 4, 5};

	std::cout << "Iterating over an array:" << std::endl;
	//printIntArray(numbers, 5);

	// Using a for-range loop
	for (const auto &number : numbers)
	{
		std::cout << number << " ";
	}
	std::cout << std::endl;

	// Example with a vector
	std::vector<std::string> fruits = {"Apple", "Banana", "Orange"};

	std::cout << "Iterating over a vector:" << std::endl;
	printStringVector(fruits);

	return 0;
}

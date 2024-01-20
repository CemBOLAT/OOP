#include <iostream>

// Function to perform linear search on an array
int linearSearch(const int array[], int size, int target)
{
	for (int i = 0; i < size; ++i)
	{
		if (array[i] == target)
		{
			// Element found, return its index
			return i;
		}
	}

	// Element not found, return -1
	return -1;
}

int main()
{
	const int size = 5;
	int numbers[size] = {10, 20, 30, 40, 50};

	int target;

	std::cout << "Enter the number to search: ";
	std::cin >> target;

	// Perform linear search
	int index = linearSearch(numbers, size, target);

	// Check the result
	if (index != -1)
	{
		std::cout << "Element found at index: " << index << std::endl;
	}
	else
	{
		std::cout << "Element not found in the array." << std::endl;
	}

	return 0;
}

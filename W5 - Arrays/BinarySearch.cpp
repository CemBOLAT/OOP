#include <iostream>

// Function to perform linear search on an array
int binarySearch(const int array[], int size, int target)
{
	int	low = 0, high = size - 1;

	while (low <= high){
		int mid = (high + low) / 2;
		if (array[mid] == target)
			return (mid);
		else if (array[mid] < target){
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return (-1);
}

int main()
{
	const int size = 5;
	int numbers[size] = {10, 20, 30, 40, 50};

	int target;

	std::cout << "Enter the number to search: ";
	std::cin >> target;

	// Perform binary search
	int index = binarySearch(numbers, size, target);

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

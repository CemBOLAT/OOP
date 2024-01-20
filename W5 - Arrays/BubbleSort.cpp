#include <iostream>

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

// Function to perform Bubble Sort on an array
void bubbleSort(int array[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			// If the element found is greater than the next element, swap them
			if (array[j] > array[j + 1])
			{
				swap(array[j], array[j + 1]);
			}
		}
	}
}

int main()
{
	const int size = 5;
	int numbers[size] = {140, 20, 360, 340, 50};

	// Perform Bubble Sort
	bubbleSort(numbers, size);

	// Display the sorted array
	for (const auto &m : numbers)
	{
		std::cout << m << " ";
	}
	std::cout << std::endl;

	return 0;
}

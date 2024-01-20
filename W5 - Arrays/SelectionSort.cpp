#include <iostream>

void	swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}

void selectionSort(int array[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int lowestIndex = i;
		for (int j = i + 1; j < size; j++)
		{
			if (array[j] < array[lowestIndex])
			{
				lowestIndex = j;
			}
		}
		// Swap the found minimum element with the element at index i
		swap(array[i], array[lowestIndex]);
	}
}

int main()
{
	const int size = 5;
	int numbers[size] = {140, 20, 360, 340, 50};

	int target;

	// Perform linear search
	selectionSort(numbers, size);

	for (const auto &m : numbers){
		std::cout << m << " ";
	}
	std::cout << std::endl;

	return 0;
}

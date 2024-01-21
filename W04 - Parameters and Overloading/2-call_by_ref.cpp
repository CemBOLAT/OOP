#include <iostream>

// Function that uses call by reference
void square(int &num)
{
	num = num * num;
	std::cout << "Inside function: " << num << std::endl;
}

int main()
{
	int value = 5;

	std::cout << "Before function call: " << value << std::endl;

	// Calling the function with a reference (call by reference)
	square(value);

	std::cout << "After function call: " << value << std::endl;

	return 0;
}

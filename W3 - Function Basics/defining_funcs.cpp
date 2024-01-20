#include <iostream>

// Function declaration (prototype)
int add(int a, int b);
// Function declaration (prototype)
double totalCost(int, double);

int main()
{
	// Function call before the definition
	int result = add(3, 4);


	std::cout << "Result: " << result << std::endl;
	std::cout << "Total cost: " << totalCost(5, 3.14) << std::endl;

	return 0;
}

// Function definition
int add(int a, int b)
{
	return a + b;
}

double totalCost(int quantity, double price)
{
	return quantity * price;
}

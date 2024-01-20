#include <iostream>

// Define a simple structure
struct Point
{
	int x;
	int y;
};

// Function that uses const call by reference with a struct
void displayPoint(const Point &pt)
{
	// pt.x = 10; // This line would result in a compilation error
	std::cout << "Inside function: (" << pt.x << ", " << pt.y << ")" << std::endl;
}

int main()
{
	// Create an instance of the Point struct
	Point myPoint = {3, 5};

	std::cout << "Before function call: (" << myPoint.x << ", " << myPoint.y << ")" << std::endl;

	// Calling the function with a const call by reference with a struct
	displayPoint(myPoint);

	std::cout << "After function call: (" << myPoint.x << ", " << myPoint.y << ")" << std::endl;

	return 0;
}

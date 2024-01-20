#include <iostream>

class MyClass
{
private:
	int value;

public:
	// Constructor
	MyClass(int initialValue) : value(initialValue) {}

	// Getter function
	int getValue() const
	{
		return value;
	}

	// Overloading binary operators as member functions
	MyClass operator+(const MyClass &other) const
	{
		return MyClass(value + other.value);
	}

	MyClass operator-(const MyClass &other) const
	{
		return MyClass(value - other.value);
	}

	MyClass operator*(const MyClass &other) const
	{
		return MyClass(value * other.value);
	}

	MyClass operator/(const MyClass &other) const
	{
		// Check if division by zero
		if (other.value != 0)
		{
			return MyClass(value / other.value);
		}
		else
		{
			std::cerr << "Error: Division by zero." << std::endl;
			return MyClass(0);
		}
	}

	// Overloading unary operators as member functions
	MyClass operator-() const
	{
		return MyClass(-value);
	}

	// Overloading the equality operator (==)
	bool operator==(const MyClass &other) const
	{
		return value == other.value;
	}

	// Overloading the output stream operator (<<)
	friend std::ostream &operator<<(std::ostream &os, const MyClass &obj)
	{
		return os << obj.value;
	}
};

int main()
{
	// Creating instances of MyClass
	MyClass a(5);
	MyClass b(3);

	// Using overloaded operators
	MyClass result1 = a + b;
	MyClass result2 = a - b;
	MyClass result3 = a * b;
	MyClass result4 = a / b;

	std::cout << "Result of a + b: " << result1 << std::endl;
	std::cout << "Result of a - b: " << result2 << std::endl;
	std::cout << "Result of a * b: " << result3 << std::endl;
	std::cout << "Result of a / b: " << result4 << std::endl;

	// Using unary operator overloading
	MyClass negatedA = -a;
	std::cout << "Negation of a: " << negatedA << std::endl;

	// Using equality operator overloading
	bool isEqual = (a == b);
	std::cout << "Is a equal to b? " << (isEqual ? "Yes" : "No") << std::endl;

	return 0;
}

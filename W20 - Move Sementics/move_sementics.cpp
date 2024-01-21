#include <iostream>
#include <vector>

class Array
{
public:
	// Default constructor
	Array() = default;

	// Copy constructor
	Array(const Array &other) : elements(other.elements) {}

	// Copy assignment operator
	Array &operator=(const Array &other)
	{
		if (this != &other)
		{
			elements = other.elements;
		}
		return *this;
	}

	// Move constructor
	Array(Array &&other) noexcept : elements(std::move(other.elements)) {}

	// Move assignment operator
	Array &operator=(Array &&other) noexcept
	{
		if (this != &other)
		{
			elements = std::move(other.elements);
		}
		return *this;
	}

	// Compound assignment operator
	Array &operator+=(const Array &other)
	{
		elements.insert(elements.end(), other.elements.begin(), other.elements.end());
		return *this;
	}

	// Begin function for range-based for loop
	int *begin() { return elements.data(); }

	// End function for range-based for loop
	int *end() { return elements.data() + elements.size(); }

	// Other member functions...

private:
	std::vector<int> elements; // Assuming elements are of type int, change as needed
};

// Overloaded addition operator for const references
Array operator+(const Array &left, const Array &right)
{
	Array res = left; // Copy constructor
	res += right;	  // Compound assignment operator
	return res;
}

// Overloaded addition operator for rvalue reference and const reference
Array operator+(Array &&left, const Array &right)
{
	left += right; // Compound assignment operator
	return std::move(left);
}

// Example usage in function f()
void f()
{
	Array b, c, d;
	// Add elements to b, c, and d if needed

	// Using the overloaded addition operator to concatenate arrays
	Array a = b + c + d;

	// Print the elements in the concatenated array
	for (int element : a)
	{
		std::cout << element << " ";
	}
	std::cout << std::endl;
}

// Example usage of the compound assignment operator
void exampleUsage()
{
	Array left, right;
	// Add elements to left and right if needed

	left += right;

	// Print the elements in the combined array
	for (int element : left)
	{
		std::cout << element << " ";
	}
	std::cout << std::endl;
}

int main()
{
	// Example usage
	f();
	exampleUsage();

	return 0;
}

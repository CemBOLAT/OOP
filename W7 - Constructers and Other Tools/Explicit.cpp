#include <iostream>

class MyClass
{
public:
	// Implicit conversion is allowed without the explicit keyword
	MyClass(int value) : data(value)
	{
		std::cout << "Constructor called. Value: " << value << std::endl;
	}

	// Function to demonstrate the effect of the explicit keyword
	void printData()
	{
		std::cout << "Data: " << data << std::endl;
	}

private:
	int data;
};

class myExplicitClass
{
	public:
		// Explicit conversion is allowed with the explicit keyword
		explicit myExplicitClass(int value);

		// Function to demonstrate the effect of the explicit keyword
		void printData()
		{
			std::cout << "Data: " << data << std::endl;
		}
	private:
		int data;
};

myExplicitClass::myExplicitClass(int value) : data(value)
{
	std::cout << "Constructor called. Value: " << value << std::endl;
}

int main()
{
	// Implicit conversion is allowed without the explicit keyword
	MyClass obj1 = 42; // Implicit conversion

	// Explicit conversion is allowed with the explicit keyword
	//myExplicitClass obj2 = 42; // Explicit conversion (error)


	obj1.printData();

	return 0;
}

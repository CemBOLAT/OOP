#include <iostream>

int main()
{
	double pi = 3.14159;
	int intValue = static_cast<int>(pi);

	std::cout << "Double value: " << pi << std::endl;
	std::cout << "Converted to int: " << intValue << std::endl;

	return 0;
}

/* (inheritance example)
#include <iostream>

class Base
{
public:
	virtual void display() const
	{
		std::cout << "Base class" << std::endl;
	}
};

class Derived : public Base
{
public:
	void display() const override
	{
		std::cout << "Derived class" << std::endl;
	}
};

int main()
{
	Derived derivedObj;
	Base *basePtr = &derivedObj;

	// Using static_cast to convert from Base* to Derived*
	Derived *derivedPtr = static_cast<Derived *>(basePtr);

	derivedPtr->display();

	return 0;
}
*/

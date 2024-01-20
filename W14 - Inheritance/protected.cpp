#include <iostream>
#include <string>

class BaseClass
{
protected:
	int protectedVar; // Accessible within the class and its derived classes

public:
	BaseClass() : protectedVar(0) {}

	void setProtectedVar(int value)
	{
		protectedVar = value;
	}

	void displayProtectedVar() const
	{
		std::cout << "ProtectedVar: " << protectedVar << std::endl;
	}
};

class DerivedClass : public BaseClass
{
public:
	void accessProtectedMember()
	{
		// Derived class can access the protected member
		protectedVar = 42;
		displayProtectedVar();
	}
};

int main()
{
	BaseClass baseObj;
	baseObj.setProtectedVar(10);
	baseObj.displayProtectedVar();

	DerivedClass derivedObj;
	derivedObj.accessProtectedMember(); // Accessing protected member in the derived class

	// The following line would result in a compilation error because protectedVar is protected.
	// derivedObj.protectedVar = 20;

	return 0;
}

#include <iostream>

class OuterClass
{
public:
	// Public members and functions of OuterClass

	void useInnerClass()
	{
		InnerClass inner; // OK, can access private nested class within OuterClass
		inner.innerFunction();
	}

	class publicInnerClass
	{
	public:
		// Public members and functions of InnerClass

		void publicInnerFunction()
		{
			std::cout << "publicInnerFunction function called" << std::endl;
		}
	};

private:
	// Private members and functions of OuterClass

	class InnerClass
	{
	public:
		// Public members and functions of InnerClass

		void innerFunction()
		{
			std::cout << "InnerClass function called" << std::endl;
		}
	};

	// More members and functions of OuterClass
};

int main()
{
	OuterClass outer;
	OuterClass::publicInnerClass inner; // OK, can access public nested class outside OuterClass
	inner.publicInnerFunction();
	outer.useInnerClass(); // Calls useInnerClass, which creates and uses InnerClass

	// Uncommenting the line below would result in a compilation error,
	// as InnerClass is private and not accessible outside OuterClass.
	// OuterClass::InnerClass inner; // Error: 'class OuterClass::InnerClass' is private

	return 0;
}

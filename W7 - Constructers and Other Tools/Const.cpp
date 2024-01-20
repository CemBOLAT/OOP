#include <iostream>
// Constant Data Members:
class MyClass
{
	private:
		const int constantValue;

	public:
		// Constructor to initialize constantValue
		MyClass(int value) : constantValue(value) {}

		// Accessor function for constantValue
		int getConstantValue() const
		{
			return constantValue;
		}
};

// Constant Member Functions:
class MyClass1 {
	public:
		int getValue() const {
			// Function can't modify data members
			return value;
		}

		void setValue(int newValue) {
			// This function can modify data members
			value = newValue;
		}

	private:
		int value;
};

// try to use non-const member function to modify const member variable
class MyClass2 {
	public:
		int getValue() const {
			// Function can't modify data members
			//value = multiplyValue(2); // Error! const member functions can't modify member variables (you can even call non const member functions)
			return value;
		}

		void setValue(int newValue) {
			// This function can modify data members
			value = newValue;
		}

		void multiplyValue(int factor) {
			// Error! const member functions can't modify member variables
			value *= factor;
		}
	private:
		int value;
};

int main(){
	MyClass obj(42);
	std::cout << obj.getConstantValue() << std::endl;

	MyClass1 obj1;
	obj1.setValue(42);
	std::cout << obj1.getValue() << std::endl;

	MyClass2 obj2;
	obj2.setValue(42);
	std::cout << obj2.getValue() << std::endl;

	return 0;
}

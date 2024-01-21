#include <iostream>
using namespace std;

class Example
{
	private:
		int value;

	public:
		void setValue(int val)
		{
			// Using 'this' pointer to avoid naming conflicts
			this->value = val;
		}

		int getValue()
		{
			// Using 'this' pointer is optional here
			return this->value;
		}
};

int main()
{
	Example obj;

	// Using the arrow operator to call member functions through an object
	obj.setValue(42);

	// Using the arrow operator to access member variables through an object
	cout << "Value: " << obj.getValue() << endl;

	return 0;
}

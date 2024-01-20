#include <iostream>
#include <cstring> // For string functions

class MyString
{
private:
	char *str;

public:
	// Constructors
	MyString() : str(nullptr) {}

	MyString(const char *s)
	{
		if (s)
		{
			str = new char[strlen(s) + 1];
			strcpy(str, s);
		}
		else
		{
			str = nullptr;
		}
	}

	// Destructor
	~MyString()
	{
		delete[] str;
	}

	// Copy constructor
	MyString(const MyString &other)
	{
		if (other.str)
		{
			str = new char[strlen(other.str) + 1];
			strcpy(str, other.str);
		}
		else
		{
			str = nullptr;
		}
	}

	// Copy assignment operator
	MyString &operator=(const MyString &other)
	{
		if (this != &other)
		{
			// Avoid self-assignment

			// Deallocate current memory
			delete[] str;

			// Allocate new memory and copy
			if (other.str)
			{
				str = new char[strlen(other.str) + 1];
				strcpy(str, other.str);
			}
			else
			{
				str = nullptr;
			}
		}

		return *this;
	}

	// Display the string
	void display() const
	{
		if (str)
		{
			std::cout << str;
		}
		else
		{
			std::cout << "Empty string";
		}
		std::cout << std::endl;
	}
};

int main()
{
	// Testing MyString class
	MyString s1("Hello");
	MyString s2("World");

	// Copy constructor
	MyString s3 = s1;

	// Copy assignment operator
	MyString s4;
	s4 = s2;

	// Display strings
	s1.display(); // Hello
	s2.display(); // World
	s3.display(); // Hello (copied from s1)
	s4.display(); // World (copied from s2)

	return 0;
}

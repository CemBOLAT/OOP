#include <iostream>
#include <cstring>

class MyString
{
private:
	char *str;

public:
	// Constructors, destructor, and copy operations...

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

	~MyString()
	{
		delete[] str;
	}

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

	MyString &operator=(const MyString &other)
	{
		if (this != &other)
		{
			delete[] str;
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

	// Overloaded subscript operator []
	char &operator[](std::size_t index)
	{
		if (str && index < strlen(str))
		{
			return str[index];
		}
		else
		{
			throw std::out_of_range("Index out of bounds");
		}
	}

	// Overloaded subscript operator [] for const objects
	const char &operator[](std::size_t index) const
	{
		if (str && index < strlen(str))
		{
			return str[index];
		}
		else
		{
			throw std::out_of_range("Index out of bounds");
		}
	}

	// Overloaded pre-increment operator ++
	MyString &operator++()
	{
		// Perform pre-increment operation
		// For simplicity, let's assume incrementing a single character
		if (str)
		{
			++str[0];
		}
		return *this;
	}

	// Overloaded post-increment operator ++
	MyString operator++(int)
	{
		// Perform post-increment operation
		// For simplicity, let's assume incrementing a single character
		MyString temp(*this);
		if (str)
		{
			++str[0];
		}
		return temp;
	}

	// Overloaded pre-decrement operator --
	MyString &operator--()
	{
		// Perform pre-decrement operation
		// For simplicity, let's assume decrementing a single character
		if (str)
		{
			--str[0];
		}
		return *this;
	}

	// Overloaded post-decrement operator --
	MyString operator--(int)
	{
		// Perform post-decrement operation
		// For simplicity, let's assume decrementing a single character
		MyString temp(*this);
		if (str)
		{
			--str[0];
		}
		return temp;
	}

	void setValue(const char *s)
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

	const char *getValue() const
	{
		return str;
	}

	// Overloaded output stream operator <<
	friend std::ostream &operator<<(std::ostream &out, const MyString &s)
	{
		if (s.str)
		{
			out << s.str;
		}
		return out;
	}
	
};

int main()
{
	MyString s("Hello");

	// Subscript operator []
	std::cout << "s[1]: " << s[1] << std::endl;

	// Pre-increment operator ++
	++s;
	std::cout << "After pre-increment: " << s.getValue() << std::endl;

	// Post-increment operator ++
	MyString postIncremented = s++;
	std::cout << "After post-increment: " << postIncremented.getValue() << std::endl;

	// Pre-decrement operator --
	--s;
	std::cout << "After pre-decrement: " << s.getValue() << std::endl;

	// Post-decrement operator --
	MyString postDecremented = s--;
	std::cout << "After post-decrement: " << postDecremented.getValue() << std::endl;

	return 0;
}

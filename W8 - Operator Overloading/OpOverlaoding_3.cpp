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

	// Overloaded compound assignment operator +=
	MyString &operator+=(const MyString &other)
	{
		// Perform += operation
		if (other.str)
		{
			char *temp = new char[strlen(str) + strlen(other.str) + 1];
			strcpy(temp, str);
			strcat(temp, other.str);

			delete[] str;
			str = temp;
		}
		return *this;
	}

	// Overloaded compound assignment operator -=
	MyString &operator-=(const MyString &other)
	{
		// Perform -= operation
		// For simplicity, let's assume subtracting a single character
		if (other.str && strlen(str) >= strlen(other.str))
		{
			for (std::size_t i = 0; i < strlen(other.str); ++i)
			{
				str[i] -= other.str[i];
			}
		}
		return *this;
	}

	// Overloaded compound assignment operator *=
	MyString &operator*=(int multiplier)
	{
		// Perform *= operation
		if (str && multiplier > 1)
		{
			char *temp = new char[strlen(str) * multiplier + 1];
			temp[0] = '\0';

			for (int i = 0; i < multiplier; ++i)
			{
				strcat(temp, str);
			}

			delete[] str;
			str = temp;
		}
		return *this;
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
	MyString s1("Hello");
	MyString s2(" World");

	// += operator
	s1 += s2;
	std::cout << "After +=: " << s1.getValue() << std::endl;

	// -= operator
	MyString s3("abc");
	MyString s4("bcd");
	s3 -= s4;
	std::cout << "After -=: " << s3.getValue() << std::endl;

	// *= operator
	MyString s5("123");
	s5 *= 3;
	std::cout << "After *=: " << s5.getValue() << std::endl;

	return 0;
}

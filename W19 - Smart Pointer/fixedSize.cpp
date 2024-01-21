#include <iostream>
#include <vector>
#include <memory> // Include the necessary header for shared_ptr

using namespace std;

class myFixedVector
{
	public:
		myFixedVector(int n = 10);
		myFixedVector(const myFixedVector & rhs);
		myFixedVector & operator=(const myFixedVector & rhs);
		int operator[](int index) const;
		void	add(int value);
		~myFixedVector();

	private:
		shared_ptr<int> data;
		int size;
		int used;
};

myFixedVector::myFixedVector(int n)
{
	size = n;
	used = 0;
	data = shared_ptr<int>(new int[size]);
}

myFixedVector::myFixedVector(const myFixedVector & rhs)
{
	size = rhs.size;
	used = rhs.used;
	data = shared_ptr<int>(new int[size]);
	for (int i = 0; i < size; i++){
		data.get()[i] = rhs.data.get()[i];
	}
}

myFixedVector & myFixedVector::operator=(const myFixedVector & rhs)
{
	if (this != &rhs)
	{
		used = rhs.used;
		size = rhs.size;
		data = shared_ptr<int>(new int[size]);
		for (int i = 0; i < size; i++)
			data.get()[i] = rhs.data.get()[i];
	}
	return *this;
}

int myFixedVector::operator[](int index) const
{
	return data.get()[index];
}

void myFixedVector::add(int value)
{
	if (used < size)
	{
		data.get()[used] = value;
		used++;
	}
}

myFixedVector::~myFixedVector()
{
	cout << "Destructor called" << endl;
}

int main()
{
	myFixedVector vec(5);
	vec.add(1);
	vec.add(2);
	vec.add(3);
	myFixedVector vec2(vec);

	for (int i = 0; i < 3; i++)
	{
		cout << vec[i] << " ";
		cout << vec2[i] << endl;
	}

	return 0;
}

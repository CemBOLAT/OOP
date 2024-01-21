#include <iostream>

// Forward declaration of the template class
template <class T>
class MyClass;

// Declaration of the template function as a friend of the template class
template <class T>
void myFriendFunction(const MyClass<T> &obj);

// Declaration of the template class
template <class T>
class MyClass
{
public:
	MyClass(T value) : data(value) {}

	// Declaration of the friend function within the template class
	friend void myFriendFunction<>(const MyClass<T> &obj);

private:
	T data;
};

// Definition of the friend function
template <class T>
void myFriendFunction(const MyClass<T> &obj)
{
	std::cout << "Friend function accessing data: " << obj.data << std::endl;
}

int main()
{
	// Instantiate the template class
	MyClass<int> myObj(42);

	// Call the friend function
	myFriendFunction(myObj);

	return 0;
}

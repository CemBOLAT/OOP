#include <iostream>


template <typename T>
class unique_ptr
{
private:
	T *p_;

public:
	unique_ptr(T *p) : p_(p) {}

	// Disable copy constructor
	unique_ptr(const unique_ptr &) = delete;

	~unique_ptr() { delete p_; }

	T &operator*() { return *p_; }
	T *operator->() { return p_; }

	unique_ptr &operator++() // pre-inc
	{
		++p_;
		return *this;
	}
};

class Obj
{
	public:
	void all_words()
		{
			std::cout << "Calling all_words() on Obj" << std::endl;
		}
};

int main()
{
	unique_ptr<Obj> ptr(new Obj);

	// Uncommenting the line below will result in a compilation error
	// unique_ptr<Obj> ptr2 = ptr; // Error: use of deleted function

	ptr->all_words();

	return 0;
}

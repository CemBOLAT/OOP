class BaseClass
{
public:
	virtual void virtualFunction() const;
	// ...
};

class DerivedClass : public BaseClass
{
public:
	void virtualFunction() const override; // 'override' is optional but recommended
	// ...
};

int main()
{
	BaseClass *basePtr = new DerivedClass();
	basePtr->virtualFunction(); // Calls the overridden function in DerivedClass

	delete basePtr;
	return 0;
}

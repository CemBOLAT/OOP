#include <iostream>
using namespace std;

// Declaration of namespace Space1
namespace Space1
{
	void greeting();
}

// Declaration of namespace Space2
namespace Space2
{
	void greeting();
}

// Definition of the global function bigGreeting
void bigGreeting()
{
	cout << "A Big Global Hello!\n";
}

int main()
{
	{
		using namespace Space2;
		greeting(); // Calls Space2::greeting
	}

	{
		using namespace Space1;
		greeting(); // Calls Space1::greeting
	}

	bigGreeting(); // Calls the global bigGreeting
	return 0;
}

// Definition of namespace Space1
namespace Space1
{
	void greeting()
	{
		cout << "Hello from namespace Space1.\n";
	}
}

// Definition of namespace Space2
namespace Space2
{
	void greeting()
	{
		cout << "Greetings from namespace Space2.\n";
	}
}

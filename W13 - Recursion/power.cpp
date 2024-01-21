#include <iostream>
#include <cstdlib>
using std::cout;
using std::endl;

// Function to calculate x to the power n using recursion
int power(int x, int n)
{
	if (n < 0)
	{
		cout << "Illegal argument to power.\n";
		exit(1);
	}
	if (n > 0)
	{
		// Recursive call
		return (power(x, n - 1) * x);
	}
	else
	{ // n == 0
		return 1;
	}
}

int main()
{
	for (int n = 0; n < 4; n++)
	{
		cout << "3 to the power " << n << " is " << power(3, n) << endl;
	}
	return 0;
}

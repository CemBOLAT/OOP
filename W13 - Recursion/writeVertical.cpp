#include <iostream>
using std::cout;
using std::endl;

// Function to write an integer vertically
void writeVertical(int n)
{
	if (n < 10)
	{
		cout << n << endl;
	}
	else
	{
		// Recursive call for each digit
		writeVertical(n / 10);
		cout << (n % 10) << endl;
	}
}

int main()
{
	cout << "writeVertical(3):" << endl;
	writeVertical(3);

	cout << "writeVertical(12):" << endl;
	writeVertical(12);

	cout << "writeVertical(123):" << endl;
	writeVertical(123);

	return 0;
}

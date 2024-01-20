/*
	Note that there must be one call to
	delete[] for each call to new that
	created an array.
	(These calls to delete[]are not
	really needed since the program is
	ending, but in another context it
	could be important to include them.)
*/

#include <iostream>
using namespace std;

typedef int *IntArrayPtr;

int main()
{
	int d1, d2;

	// Input dimensions of the array
	cout << "Enter the row and column dimensions of the array:\n";
	cin >> d1 >> d2;

	// Dynamic memory allocation for a d1-by-d2 array
	IntArrayPtr *m = new IntArrayPtr[d1];

	int i, j;

	for (i = 0; i < d1; i++)
		m[i] = new int[d2];

	// Input values into the array
	cout << "Enter " << d1 << " rows of " << d2 << " integers each:\n";
	for (i = 0; i < d1; i++)
		for (j = 0; j < d2; j++)
			cin >> m[i][j];

	// Output the contents of the array
	cout << "Echoing the two-dimensional array:\n";
	for (i = 0; i < d1; i++)
	{
		for (j = 0; j < d2; j++)
			cout << m[i][j] << " ";
		cout << endl;
	}

	// Deallocate memory
	for (i = 0; i < d1; i++)
		delete[] m[i];
	delete[] m;

	return 0;
}

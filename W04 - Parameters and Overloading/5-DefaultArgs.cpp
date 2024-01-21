#include <iostream>
using namespace std;

// Function declaration with default parameter values
void showVolume(int length, int width = 1, int height = 1);

int main()
{
	// Function calls with different numbers of arguments
	showVolume(4, 6, 2); // Providing values for all parameters
	showVolume(4, 6);	 // Providing values for length and width (using default height)
	showVolume(4);		 // Providing value for length only (using default width and height)

	return 0;
}

// Function definition for showVolume
void showVolume(int length, int width, int height)
{
	cout << "Volume of a box with \n"
		 << "Length = " << length << ", Width = " << width << endl
		 << "and Height = " << height
		 << " is " << length * width * height << endl;
}

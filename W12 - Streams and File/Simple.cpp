#include <fstream>
#include <iostream> // Added for standard input/output
using std::cout;	// Added for standard output
using std::endl;
using std::ifstream;
using std::ofstream;

int main()
{
	ifstream inStream;
	ofstream outStream;

	// Open the input file "infile.txt" for reading
	inStream.open("infile.txt");

	// Check if the input file is successfully opened
	if (inStream.fail())
	{
		cout << "Error: Unable to open input file 'infile.txt'\n";
		return 1; // Exit with an error code
	}

	// Open the output file "outfile.txt" for writing
	outStream.open("outfile.txt");

	// Check if the output file is successfully opened
	if (outStream.fail())
	{
		cout << "Error: Unable to open output file 'outfile.txt'\n";
		inStream.close(); // Close the input file before exiting
		return 1;		  // Exit with an error code
	}

	int first, second, third;

	// Read three numbers from the input file
	inStream >> first >> second >> third;

	// Write the sum of the three numbers to the output file
	outStream << "The sum of the first 3\n"
			  << "numbers in infile.txt\n"
			  << "is " << (first + second + third)
			  << endl;

	// Close both input and output streams
	inStream.close();
	outStream.close();

	return 0; // Exit successfully
}

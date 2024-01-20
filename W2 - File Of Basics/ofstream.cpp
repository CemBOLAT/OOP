#include <iostream>
#include <fstream>

int main()
{
	// Open a file for writing (creates a new file or truncates an existing file)
	std::ofstream outFile("example.txt");

	if (outFile.is_open())
	{
		// File opened successfully, write data to the file
		outFile << "Hello, File!" << std::endl;

		// Close the file when done
		outFile.close();
	}
	else
	{
		std::cerr << "Unable to open file for writing." << std::endl;
	}

	return 0;
}

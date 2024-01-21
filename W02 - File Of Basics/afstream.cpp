#include <iostream>
#include <fstream>

int main()
{
	// Open a file for appending
	std::ofstream outFile("example.txt", std::ios::app);

	if (outFile.is_open())
	{
		// File opened successfully, append data to the file
		outFile << "Appending more data." << std::endl;

		// Close the file when done
		outFile.close();
	}
	else
	{
		std::cerr << "Unable to open file for appending." << std::endl;
	}

	return 0;
}

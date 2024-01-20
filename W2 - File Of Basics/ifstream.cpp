#include <iostream>
#include <fstream>
#include <string>

int main()
{
	// Open a file for reading
	std::ifstream inFile("example.txt");

	if (inFile.is_open())
	{
		// File opened successfully, read data from the file
		std::string line;
		while (std::getline(inFile, line))
		{
			std::cout << "Read from file: " << line << std::endl;
		}

		// Close the file when done
		inFile.close();
	}
	else
	{
		std::cerr << "Unable to open file for reading." << std::endl;
	}

	return 0;
}

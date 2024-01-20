#include <iostream>
#include <string>

int main()
{
	// Initializing strings
	std::string greeting = "Hello, ";
	std::string name = "John";

	// Concatenation using the + operator
	std::string message = greeting + name;

	// Comparison using the == operator
	if (greeting == "Hello, ")
	{
		std::cout << "The greeting is correct!\n";
	}

	// Accessing characters using the [] operator
	char firstChar = name[0];

	// Finding substring using find() member function
	size_t position = message.find("John");

	// Extracting substring using substr() member function
	std::string subMessage = message.substr(position, 4);

	// Displaying the results
	std::cout << "Message: " << message << "\n";
	std::cout << "First character of the name: " << firstChar << "\n";
	std::cout << "Substring: " << subMessage << "\n";

	return 0;
}

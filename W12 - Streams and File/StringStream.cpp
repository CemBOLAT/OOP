#include <iostream>
#include <string>
#include <sstream>

int main()
{
	// Create a stringstream
	std::stringstream ss;

	// Input string containing name and scores
	std::string scores = "Luigi 70 100 90";

	// Clear and reset the stringstream
	ss.str("");
	ss.clear();

	// Put the scores into the stringstream
	ss << scores;

	// Extract the name and average the scores
	std::string name = "";
	int total = 0, count = 0, average = 0;
	int score;

	// Read the name
	ss >> name;

	// Read scores until the end of the string
	while (ss >> score)
	{
		count++;
		total += score;
	}

	// Calculate average if there are scores
	if (count > 0)
	{
		average = total / count;
	}

	// Clear and reset the stringstream
	ss.clear();
	ss.str("");

	// Put the name and average into the stringstream
	ss << "Name: " << name << " Average: " << average;

	// Output as a string
	std::cout << ss.str() << std::endl;

	return 0;
}

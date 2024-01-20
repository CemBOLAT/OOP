#include <iostream>
#include <string>
using namespace std;

int main()
{
	string phrase;
	string adjective("fried"), noun("ants");
	string wish = "Bon appétit!"; // Note: Corrected spelling of "appétit"

	// Constructing the string using concatenation
	phrase = "I love " + adjective + " " + noun + "!";

	// Displaying the constructed string and the wish
	cout << phrase << endl
		 << wish << endl;

	return 0;
}

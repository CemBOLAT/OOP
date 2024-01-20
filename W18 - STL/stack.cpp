#include <iostream>
#include <stack>

int main()
{
	std::stack<char> s;

	std::cout << "Enter a line of text:\n";

	char next;
	std::cin.get(next);

	while (next != '\n')
	{
		s.push(next);
		std::cin.get(next);
	}

	std::cout << "Written backward that is:\n";

	while (!s.empty())
	{
		std::cout << s.top();
		s.pop();
	}

	std::cout << std::endl;

	return 0;
}

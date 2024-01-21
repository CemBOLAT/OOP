#include <iostream>
#include <vector>

struct S
{
	S()
	{
		a = ++cnt;
		std::cout << "S() ";
	}
	S(const S &rhs)
	{
		a = rhs.a;
		std::cout << "copyCtr ";
	}
	S(S &&rhs) noexcept
	{
		a = rhs.a;
		std::cout << "moveCtr ";
	}
	S &operator=(const S &rhs)
	{
		a = rhs.a;
		std::cout << "copy= ";
		return *this;
	}
	S &operator=(S &&rhs) noexcept
	{
		a = rhs.a;
		std::cout << "move= ";
		return *this;
	}

	int a;
	static int cnt;
};

int S::cnt = 0;

int main()
{
	std::vector<S> sv(5);
	sv.push_back(S());

	for (std::size_t i = 0; i < sv.size(); ++i)
		std::cout << sv[i].a << " ";

	std::cout << std::endl;
}

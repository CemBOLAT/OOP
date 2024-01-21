#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>

int main()
{
	// Using std::vector
	{
		std::cout << "Using std::vector:\n";
		std::vector<int> vec;
		for (int i = 1; i <= 5; ++i)
			vec.push_back(i);

		for (auto it = vec.begin(); it != vec.end(); ++it)
			std::cout << *it << " ";
		std::cout << "\n\n";
	}

	// Using std::list
	{
		std::cout << "Using std::list:\n";
		std::list<int> myList;
		for (int i = 1; i <= 5; ++i)
			myList.push_back(i * 10);

		for (auto it = myList.begin(); it != myList.end(); ++it)
			std::cout << *it << " ";
		std::cout << "\n\n";
	}

	// Using std::forward_list
	{
		std::cout << "Using std::forward_list:\n";
		std::forward_list<int> sList;
		for (int i = 1; i <= 5; ++i)
			sList.push_front(i * 100);

		for (auto it = sList.begin(); it != sList.end(); ++it)
			std::cout << *it << " ";
		std::cout << "\n\n";
	}

	// Using std::deque
	{
		std::cout << "Using std::deque:\n";
		std::deque<int> deq;
		for (int i = 1; i <= 5; ++i)
		{
			deq.push_front(i);
			deq.push_back(i * 10);
		}

		for (auto it = deq.begin(); it != deq.end(); ++it)
			std::cout << *it << " ";
		std::cout << "\n\n";
	}

	return 0;
}

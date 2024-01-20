#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	ifstream fin("input.txt");	 // Replace "input.txt" with your input file name
	ofstream fout("output.txt"); // Replace "output.txt" with your output file name

	if (!fin)
	{
		cerr << "Error: Unable to open input file 'input.txt'\n";
		return 1;
	}

	if (!fout)
	{
		cerr << "Error: Unable to open output file 'output.txt'\n";
		fin.close();
		return 1;
	}

	char next;
	int n = 0;

	fin.get(next);
	fout << n << " ";
	while (!fin.eof())
	{
		fout << next;
		if (next == '\n')
		{
			n++;
			fout << n << ' ';
		}
		fin.get(next);
	}

	fin.close();
	fout.close();

	return 0;
}

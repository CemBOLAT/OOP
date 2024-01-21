#include <vector>
#include <memory> // Include the necessary header for shared_ptr
#include "obj.h"

using namespace std;

int main()
{
	vector<shared_ptr<Obj>> myvec; // Corrected syntax

	shared_ptr<Obj> p1(new Obj); // Corrected syntax
	myvec.push_back(p1);

	shared_ptr<Obj> p2(new Obj); // Corrected syntax
	myvec.push_back(p2);

	// myvec goes out of scope...
	return 0;
}

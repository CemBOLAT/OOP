#include <iostream>

// usage of inline functions

class Inline{
	public:
		// inline constructor
		Inline(int x) : x(x) {}

		// inline destructor
		~Inline() {}

		// inline member function
		int getX() const {
			return x;
		}

		// inline member function
		void setX(int x) {
			this->x = x;
		}

	private:
		int x;
};

int main(){
	Inline obj(42);
	std::cout << obj.getX() << std::endl;
	obj.setX(21);
	std::cout << obj.getX() << std::endl;

	return 0;
}

#include <iostream>

class Static{
	private:
		static int x;
		const static int y;
	public:
		// static member variable

		// static member function
		static int getX() {
			return x;
		}

		// static member function
		static void setX(int x) {
			Static::x = x;
		}
	static int getY() /*const*/ { // const keyword is not allowed for static member functions
			return y;
		}
};

int Static::x = 42;
const int Static::y = 21;

int main(){
	std::cout << Static::getX() << std::endl;
	Static::setX(621);
	std::cout << Static::getX() << std::endl;
	std::cout << "const static member variable: " << Static::getY() << std::endl;

	return 0;
}

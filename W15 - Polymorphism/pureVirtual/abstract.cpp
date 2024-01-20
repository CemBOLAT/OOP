class AbstractShape
{
public:
	// Pure virtual function
	virtual void draw() const = 0;

	// Other non-pure virtual functions
	virtual double area() const = 0;
	virtual ~AbstractShape() = default;
};

class Circle : public AbstractShape
{
private:
	double radius;

public:
	Circle(double r) : radius(r) {}

	// Override pure virtual function
	void draw() const override
	{
		// Implementation for drawing a circle
		// ...
	}

	// Override other pure virtual functions
	double area() const override
	{
		// Implementation for calculating the area of a circle
		// ...
		return 3.14 * radius * radius;
	}
};

class Square : public AbstractShape
{
private:
	double side;

public:
	Square(double s) : side(s) {}

	// Override pure virtual function
	void draw() const override
	{
		// Implementation for drawing a square
		// ...
	}

	// Override other pure virtual functions
	double area() const override
	{
		// Implementation for calculating the area of a square
		// ...
		return side * side;
	}
};

#include <iostream>

int main()
{
	Circle circle(5.0);
	Square square(4.0);

	AbstractShape *shape1 = &circle;
	AbstractShape *shape2 = &square;

	std::cout << "Area of circle: " << shape1->area() << std::endl;
	std::cout << "Area of square: " << shape2->area() << std::endl;

	return 0;
}

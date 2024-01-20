#include <iostream>
#include <cmath>
#include <cstdlib>

int main()
{
	// sqrt - Square root
	double squareRoot = sqrt(4.0);
	std::cout << "Square root of 4.0: " << squareRoot << std::endl;

	// pow - Powers
	double powerResult = pow(2.0, 3.0);
	std::cout << "2.0 raised to the power of 3.0: " << powerResult << std::endl;

	// abs - Absolute value for int
	int absInt1 = abs(-7);
	int absInt2 = abs(7);
	std::cout << "Absolute value of -7: " << absInt1 << std::endl;
	std::cout << "Absolute value of 7: " << absInt2 << std::endl;

	// labs - Absolute value for long
	long absLong1 = labs(-70000);
	long absLong2 = labs(70000);
	std::cout << "Absolute value of -70000: " << absLong1 << std::endl;
	std::cout << "Absolute value of 70000: " << absLong2 << std::endl;

	// fabs - Absolute value for double
	double absDouble1 = fabs(-7.5);
	double absDouble2 = fabs(7.5);
	std::cout << "Absolute value of -7.5: " << absDouble1 << std::endl;
	std::cout << "Absolute value of 7.5: " << absDouble2 << std::endl;

	// ceil - Ceiling (round up)
	double ceilValue1 = ceil(3.2);
	double ceilValue2 = ceil(3.9);
	std::cout << "Ceiling of 3.2: " << ceilValue1 << std::endl;
	std::cout << "Ceiling of 3.9: " << ceilValue2 << std::endl;

	// floor - Floor (round down)
	double floorValue1 = floor(3.2);
	double floorValue2 = floor(3.9);
	std::cout << "Floor of 3.2: " << floorValue1 << std::endl;
	std::cout << "Floor of 3.9: " << floorValue2 << std::endl;

	// rand - Random number
	int randomNum = rand();
	std::cout << "Random number: " << randomNum << std::endl;

	// srand - Set seed for rand
	srand(42); // You might use a different seed value
	int seededRandomNum = rand();
	std::cout << "Random number after seeding: " << seededRandomNum << std::endl;

	// exit - End program
	std::cout << "Exiting the program..." << std::endl;
	exit(1); // Note: exit(0) generally indicates successful execution

	return 0;
}

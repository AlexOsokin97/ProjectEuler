#include <iostream>
#include <cmath>

int main()
{
	unsigned int c;
	unsigned int sum = 1000;

	for (unsigned int a = 1; a < sum / 3; a++) {
		for (unsigned int b = a; b < sum / 2; b++) {

			c = sum - a - b;

			if (((pow(a, 2)) + (pow(b, 2)) == (pow(c, 2)))) {
				std::cout << "a = " << a << std::endl << "b = " << b << std::endl << "c = " << c << std::endl << "a * b * c = " << a * b * c;
				return 0;
			}

		}

	}

}
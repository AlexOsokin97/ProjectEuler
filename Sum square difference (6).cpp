#include <iostream>
#include <cmath>

int main()
{
	int sumOfSquares = 0;
	int squareOfSum = 0;

	for (int i = 100; i >= 1; i--) {
		sumOfSquares = sumOfSquares + pow(i, 2);
		squareOfSum = squareOfSum + i;
	}

	std::cout << ((pow(squareOfSum, 2)) - sumOfSquares);

}

#include <iostream>
#include <cmath>

bool isPrime(int num) {
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) { return false; }
	}

	return true;

}

int main()
{
	int number = 2;
	for (int primes = 1; ; number++) {
		if (isPrime(number)) {
			if (primes++ == 10001) {
				std::cout << number;
				break;
			}
		}
	}
}
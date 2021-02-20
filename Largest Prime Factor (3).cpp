#include <iostream>
#include <math.h>

//function to check whether a number is a prime or not prime
//in order to check if a N is a prime: 
//Check if each number (I) between [2 , sqrt(N)] -> N % I == 0
bool CheckIfPrime(int num) {

	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return false;
		}
		else {
			continue;
		}
	}

	return true;
}

int main()
{

	long long number = 600851475143;
	int j = 2;

	while (number > j)
	{
		if (CheckIfPrime(j) && number % j == 0) {
			number = number / j;
			j++;
			continue;
		}
		else {
			j++;
			continue;
		}


	}

	std::cout << j;

}
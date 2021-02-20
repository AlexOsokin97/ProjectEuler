#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

bool isPrime(int num) {

	int n = num;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
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

}

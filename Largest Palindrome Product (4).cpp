#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

/*
	function that checks whether a number is a palindrom or not
*/
bool isPalindrom(int num)
{
	int number = num;
	int reverse = 0;
	while (number != 0) {
		reverse = (reverse * 10) + (number % 10);
		number = number / 10;
	}

	if (reverse == num) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	std::vector<int> vect; //dynamic array which stores all palindromes

	for (int i = 999; i >= 100; i--) {
		for (int j = 999; j >= 100; j--) {
			
			if (isPalindrom(j * i)) {
				vect.push_back(j * i); //storing the palindrom in the vector
			}
			else {
				continue;
			}
		}
	}

	std::cout << *max_element(vect.begin(), vect.end()); //using *max_element from <algorithm> library
}
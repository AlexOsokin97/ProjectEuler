#include <iostream>

int main()
{
	int number = 20; 
	int itr = 2;

	while (itr < 20) 
	{
		if (number % itr == 0) 
		{
			itr++;
			if (itr == 20) 
			{
				if ((number % itr) == 0) 
				{
					std::cout << number;
				}
			}
		}
		else {
			number++;
			itr = 2;
		}
	}
}


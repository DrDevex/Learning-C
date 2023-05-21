#include <stdio.h>

int main(void)
{
	int number = 100;

	for (i = 0; i <= number; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}

	}
	
	return 0;
}

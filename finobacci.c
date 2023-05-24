/**
 * Finobaaci Sequence: Each number is the sum of two preceding ones
 * Author: Oladapo Opeyemi
 */

#include <stdio.h>

int main(void)
{
	int number = 100;

	for (int i = 0; i < number; i++)
	{
		i = i + 1;
		
		printf("%d\n", i);
	}

	return 0;
}

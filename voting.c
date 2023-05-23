#include <stdio.h>

int main()
{
	int prompt, age;
	
	printf("Enter Your age: ");
	scanf("%d", &age);

	if (age < 18)
	{
		printf("Uneligible to vote");
	}

	return 0;
}

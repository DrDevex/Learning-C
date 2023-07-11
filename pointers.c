#include <stdio.h>
/**
 * main: Entry of the program
 * desc:
 * Return- 0 means executed and exited succesfully
 */

void modif_my_char_var(char *cc, char ccc);

int main(void)
{
	int n;
	int *pp;
	int m;

	n = 98;
	pp = &n;
	m = *pp;

	printf("The value of n = %d\n", n);
	printf("The value of p = %p\n", pp);
	printf("The address of n = %p\n", &n);
	printf("The value of m = %d\n", m);
	printf("The address of m = %p\n", &m);
	printf("***********\n");


	char c;
	char *p;

	p = &c;
	c = 'H';

	printf("The value of c before the function = %c\n", c);
	printf("The address of c = %p\n", &c);
	printf("The value of the pointer = %p\n", p);

	modif_my_char_var(p, c);
	
	printf("The value of c after the function = %c\n", c);
	printf("The address of c = %p\n", &c);
	printf("The value of the pointer = %p\n", p);

	return (0);
}









void modif_my_char_var(char *cc, char ccc)
{
	*cc = 'o';
	ccc = 'l';
}

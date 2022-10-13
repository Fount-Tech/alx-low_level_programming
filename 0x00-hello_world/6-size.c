#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{	char c;
	int i;
	long l;
	float f;

printf("Size of a char:%lu.\n", (unsigned long)sizeof(i));
printf("Size of an int:%lu.\n", (unsigned long)sizeof(l));
printf("Size of a long:%lu.\n", (unsigned long)sizeof(f));
printf("Size of a float:%lu.\n", (unsigned long)sizeof(c));
return (0);
}

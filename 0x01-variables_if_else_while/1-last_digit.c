#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)

{
	int n;
	int new;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	new = n % 10;
	if (new > 5)
{
	printf("last digit of %d is %d and is greater than 5/n", n, new);
}
	else if (new == 0)
{
	printf("last digit of %d is  %d and is 0\n", n, new);
}
	else if (new < 6 && new != 0)
{
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, new);
}
	return (0);
}


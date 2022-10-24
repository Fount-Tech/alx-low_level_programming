#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 *@a: the fisrt int
 *@b: the second int
 *Return: No return
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}


#include "main.h"
/**
 *print_alphabet_x10 - function that
 *prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	int num;

	char alpha;

	for(num =0; num<=10; num++)
	{
		for(alpha = 'a'; alpha <='z'; alpha++)
		{
	_putchar(alpha);

	}
		_putchar('\n');
	}

}

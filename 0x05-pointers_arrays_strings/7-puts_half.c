#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
	int num_count = 0, i;

	while (num_count >= 0)
	{
		if (str[num_count] == '\0')
			break;
		num_count++;
	}

	if (num_count % 2 == 1)
		i = num_count / 2;
	else
		i = (num_count - 1) / 2;

	for (i++; i < num_count; i++)
		_putchar(str[i]);
	_putchar('\n');
}

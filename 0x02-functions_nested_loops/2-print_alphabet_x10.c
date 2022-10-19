#include "main.h"
/**
 *print_alphabet_x10 - function that
 *prints 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	int num = 0;

	char alphabet;

	while (num++ <= 9)
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	putchar(alphabet);
	putchar('\n');
}

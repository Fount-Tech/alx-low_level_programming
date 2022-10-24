#include "main.h"
/**
 *_strlen - that returns the lenth of a string
 *@s: takes a string
 *Return: return 0
 */
int _strlen(char *s)
{
int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}

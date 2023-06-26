#include "main.h"


/**
*_puts - a function that prints a string, followed by a new line, to stdout.
*@str: the string.
*Return: (0).
*/


void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		puts(str[index]);
	}
	puts('\n');
}

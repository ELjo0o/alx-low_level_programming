#include "main.h"


/**
*_puts - a function that prints a string, followed by a new line, to stdout.
*@str: the string.
*Return: (0).
*/


void _puts(char *str)
{

	char res = 0;

	while (str[res] != '0')
	{
		_putchar(str[res]);
		res++;
	}
	_putchar('\n');
}

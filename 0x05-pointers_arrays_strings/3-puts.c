#include "main.h"
#include <stdout.h>
/**
*_puts - a function that prints a string, followed by a new line, to stdout.
*@str: the string.
*Return: (0).
*/


void _puts(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_puts(str[count]);
		count++;
	}
	_puts('\n');
}

#include "main.h"
#include <stdio.h>

/**
*_puts - a function that prints a string, followed by a new line, to stdout.
*@str: the string.
*Return: (0).
*/


void _puts(char *str)
{
	int count= 'a'

	for (count = 'a'; count <= 'z'; count++)
	{
		while (str[count] != '\0')
		{
			_puts(str[count]);
			count++;
		}
	}
	_puts('\n');
}

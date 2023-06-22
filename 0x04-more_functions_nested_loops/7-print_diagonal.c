#include "main.h"

/**
*print_diagonal - function that draws a diagonal line on the terminal.
*@n: is the number of times the character \ should be printed.
*Return: (0).
*/


void print_diagonal(int n)
{

	int line, space;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)
			{
				_putchar(' ');
			}

			_putchar('\\');

			if (len == (n - 1))
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}

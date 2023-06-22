#include "main.h"

/**
*print_square - function that prints a square, followed by a new line.
*@size: is the size of the square.
*Return: (0).
*/


void print_square(int size)
{

	int x1, x2;

	if (size > 0)
	{
		for (x1 = 0; x1 < size; x1++)
		{
			for (x2 = 0; x2 < (size - 1); x2++)
			{
				_putchar('#');
			}

			_putchar('#');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}

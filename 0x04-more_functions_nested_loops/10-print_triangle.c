#include "main.h"

/**
*print_triangle - prints a triangle
*@size:size parameter of triangle
*Return: (0).
*/

void print_triangle(int size)
{
	int x1, x2;

	if (size > 0)
	{
		for (x1 = 1; x1 <= size; x1++)
		{
			for ((x2 = size - x1); x2 > 0; x2--)
			{
				_putchar(' ');
			}

			for (x2 = 0; x2 < x1; x2++)
			{
				_putchar('#');
			}

			if (x1 == size)
			{
				continue;
			}

			_putchar('\n');
		}
	}
	_putchar('\n');
}

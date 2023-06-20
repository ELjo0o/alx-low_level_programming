#include "main.h"


/**
*times_table - prints the 9 times table.
*Return: (0)
*/


void times_table(void)
{
	int a, b, sum;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0');

		for (b = 1; b <= 9; b++)
		{
			sum = a * b;
			_putchar('0');
			_putchar(' ');
			if (sum <= 9)
			{
				_putchar(' ');
				_putchar(sum + '0');
			}
			else
			{
				_putchar((sum / 10) + '0');
				_putchar((sum % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

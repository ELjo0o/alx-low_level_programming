#include "main.h"


/**
*time_table - prints the 9 times table.
*Return: (0)
*/


void time_table(void)
{
	int digit, line, result;

	for (digit = 0; digit <= 9; digit++)
	{
		_putchar('0');

	for (line = 1; line <= 9; line++)
	{
		_putchar(',');
		_putchar(' ');
		result = digit * line;
	if (result <= 9)
	{
		_putchar(' ');
	}
	else
	{
		_putchar((result / 10) + '0');

		_putchar((result % 10) + '0');
	}
	}
	_putchar('\n');
	}
}

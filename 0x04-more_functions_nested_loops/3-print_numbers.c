#include "main.h"

/**
*print_numbers - function that print all numbers from0 to 9
*Return: nothing.
*/

void print_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		_putchar(x);
	}
	_putchar(10);
}

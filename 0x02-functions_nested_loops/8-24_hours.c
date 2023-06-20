#include "main.h"

/**
*jack_bauer - print a every minute of the day starting from 00:00 to 23:59.
*Return: (0).
*/


void jack_bauer(void)
{
	int mins, hours;

	for (hours = 0; hours <= 23; hours++)
	{
		for (mins = 0; mins <= 59; mins++)
		{
		_putchar((hours / 10) + '0');
		_putchar((hours % 10) + '0');
		_putchar(':');
		_putchar((mins / 10) + '0');
		_putchar((mins % 10) + '0');
		_putchar(10);
		}
	}

}

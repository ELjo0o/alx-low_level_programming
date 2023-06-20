#include "main.h"

/**
* print_alphabet_x10 - Entry point.
* DESC - print ten time alphabet.
* Return - (0) (Success).
*/

void print_alphabet_x10(void)
{
	int line = 0;
	char alpha = 'a';

	while (line++ < 10)
	{
		while (alpha++ <= 'z')
			{
			_putchar(alpha);
			alpha++;
			}
	_putchar('\n');
	line++;
	}
}

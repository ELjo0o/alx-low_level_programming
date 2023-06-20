#include "main.h"

/**
* print_alphabet_x10 - Entry point.
* DESC - print ten time alphabet.
* Return - (0) (Success).
*/

void print_alphabet_x10(void)
{
	int line = 0;
	int alpha;

	while (line++ <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar(10);
	}
}

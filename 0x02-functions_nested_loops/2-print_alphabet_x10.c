#include "main.h"

/**
* print_alphabet_x10 - Entry point.
* DESC - print ten time alphabet.
* Return - (0) (Success).
*/

void print_alphabet_x10(void)
{
	int line;
	char alpha;

	while (line++ < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	}

	_putchar('\n');
}

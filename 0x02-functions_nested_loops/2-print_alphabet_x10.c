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

	for (line = '0'; line = <= '9'; line++)
	{
		_putchar(line);

		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	}

	_putchar('\n')
}

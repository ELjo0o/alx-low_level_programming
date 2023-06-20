#include "main.h"

/**
* print_alphabet - Entry point.
* desc: prints the alphabet, in lowercase, end by new line.
* return: (0) (Success)
*/

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}

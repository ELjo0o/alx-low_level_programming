#include "main.h"

/**
* main - prints the alphabet, in lowercase, end by new line.
* return: (0) (Success)
*/


void print_alphabet(void);
{
	char alpha;

	for (alpha = 'a', alpha <= 'z', alpha++)

	_putchar("%c\n", alpha);
	return (0);
}

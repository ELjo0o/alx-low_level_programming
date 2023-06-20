#include "main.h"

/*
* main - write a program that print a _putchar.
*
* return: (0) (Success).
*/


int main(void);
{
	char put[] = "_putchar";

	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(put[x]);
	}
	_putchar('\n');
	return (0);
}

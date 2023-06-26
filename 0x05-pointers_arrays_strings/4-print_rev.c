#include "main.h"

/**
*print_rev - prints a string, in reverse
*@s: the char.
*Return: (0).
*/
void print_rev(char *s)
{
	int base = *s;
	print_rev(base);
	return (0);
}

#include "main.h"

/**
* print_to_98 - print number from 0 to 98.
* @n:  number to print.
* Return: (0)
*/


void print_to_98(int n)
{

	if (n >= 98)
	{
	while (n > 98)
	printf("%d, ", n--);

	printf("%d\n", n);
	}
	else
	{
	while (n < 98)
	printf("%d, ", n++);

	printf("%d\n", n);
	}
}

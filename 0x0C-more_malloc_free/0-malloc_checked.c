#include "main.h"

/**
* malloc_checked - a function that allocates memory using malloc.
* @b: int number.
* Return: termination with a status value of 98.
*/

void *malloc_checked(unsigned int b)
{
	int *ma = malloc(b);

	if (ma == 0)
		exit(98);

	return (ma);
}

#include "main"

/**
* malloc_checked - a function that allocates memory using malloc.
* @b: int number. 
* Return: termination with a status value of 98.
*/

void *malloc_checked(unsigned int b)
{
	int *ma;

	ma = malloc(b);
	if (ma == NULL)
		exit(98)
	return (ma);

}

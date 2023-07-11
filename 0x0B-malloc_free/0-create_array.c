#include "main.h"

/**
* create_array -  a function that creates an array of chars,
* and initializes it with a specific char.
* @size: size of the array.
* @c: char to initialize.
* Return: a pointer to the array, or NULL if it fails.
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == NULL || n == NULL)
		return (0);

	while (size--)
		n[size] = c;
}

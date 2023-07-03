#include "main.h"

/**
* _memcpy - a function that copies memory area.
* @dest: A pointer to the memory area.
* @src: The source buffer.
* @n: The number of bytes to copy.
* Return: (dest)
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

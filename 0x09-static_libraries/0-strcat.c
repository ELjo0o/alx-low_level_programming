#include "main.h"

/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int x1 = 0;
	int x2 = 0;

	while (dest[x1] != '\0')
	{
		x1++;
	}
	while (src[x2] != '\0')
	{
		dest[x1 + x2] = src[x2];
		x2++;
	}
	x1++;
	return (dest);
}

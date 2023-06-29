#include "main.h"

/**
 * _strncat - concats two arrays
 * @dest: destination of concat
 * @src: source array to concat
 * @n: amount of times to append
 * Return: char value
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y;

	while (dest[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[x] = src[y];
		x++;
	}
	return (dest);
}

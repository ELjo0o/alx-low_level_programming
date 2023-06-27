#include "main.h"

/**
* _strcpy - function that copies the string pointed to by src
* @dest: the buffer.
* @src: the string.
* Return: (0).
*/

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int i;

	while (src[l] != '\0')
	{
		l++;
	}
	for (i = 0; i <= l; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

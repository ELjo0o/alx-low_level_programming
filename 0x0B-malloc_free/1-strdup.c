#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 * Return: pointer of an array of chars
 */

char *_strdup(char *str)
{
	char *mal;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	mal = (char *)malloc(sizeof(char) * (i + 1));

	if (mal == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		mal[j] = str[j];

	return (mal);
}

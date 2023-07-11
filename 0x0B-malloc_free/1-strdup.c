#include "main.h"

/**
* *_strdup - a function that returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter
* @*str:
* Return:
*/

char *_strdup(char *str)
{
 	int i = 0, size = 0;
	char *ma;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	ma = malloc(size * sizeof(*str) + 1);

	if (ma == 0)
		return (NULL);
	else
	{
		for (; i < size; i++)
			ma[i] = str[i];
	}
	return (ma);
}

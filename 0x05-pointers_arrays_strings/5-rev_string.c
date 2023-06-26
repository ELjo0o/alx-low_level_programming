#include "main.h"

/**
*rev_string - function that reverses a string.
*@s: the string.
*Return: (0).
*/

void rev_string(char *s)
{
	int i = 0;
	int r = 0;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > r)
	{
		tmp = s[r];
		s[r] = s[i];
		s[i] = tmp;
		i--;
		r++;
	}
}

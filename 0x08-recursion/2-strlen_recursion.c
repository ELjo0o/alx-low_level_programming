#include "main.h"

/**
* _strlen_recursion - a function that returns the length of a string.
* @s: the string.
* Return: (0)
*/

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}

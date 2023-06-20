#include "main.h"

/**
* _islower - Entry point.
* Desc: function that checks for lowercase character.
* @c: letter being tested
* Return: (0) (Success)
*/


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

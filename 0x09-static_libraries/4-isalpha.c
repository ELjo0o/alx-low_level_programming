#include "main.h"

/**
* _isalpha - Entry point.
*
* @c: is c an integer argument
*
* Return: (0) (Success)
*/

int _isalpha(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

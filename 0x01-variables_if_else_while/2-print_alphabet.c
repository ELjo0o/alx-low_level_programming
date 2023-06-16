#include <stdio.h>

/**
* main - Entry point.
*
* This function prints the alphabet in lowercase, followed by a new line.
*
* Return: Always 0 (Success)
*/

int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		x = tolower(x);
		putchar("%d\n", x);
	}
	return (0);
}

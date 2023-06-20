#include "main.h"

/**
* main - Entry point of the program.
* Description: print _putchar end bu new line.
* Return: (0) (Success).
*/


int main(void)
{
	char goal[] = "_putchar";

	int x;

	for (x = 0; x < 8; x++)
	{
		_putchar(goal[x]);
	}
	_putchar('\n');
	return (0);
}

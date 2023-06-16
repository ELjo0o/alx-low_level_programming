#include <stdio.h>
#include <ctype.h>


/**
* main - Entry point.
*
* This function prints the alphabet in lowercase, followed by a new line.
*
* Return: Always 0 (Success)
*/

int main(void)

{
	int  x;

	for(x = 'a'; x <= 'z'; x++)
	{
		x = tolower(x);
		putchar(x);
	}
	putchar('\n');
	return (0);
}

#include<stdio.h>
#include<ctype.h>

/**
* main - Program to print alphabet letters in reverse followed by new line
*
* Return: 0 (Success)
*/


int main(void)
{
	int rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}
	putchar('\n');
	return (0);
}

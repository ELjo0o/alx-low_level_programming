#include <stdio.h>
#include <ctype.h>

/**
* main - prints out the alphabet in lowercase except for 'q,e'
*
* Return: 0 (Success).
*/

int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'q' || alpha == 'e')
		{
			continue;
		}
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}

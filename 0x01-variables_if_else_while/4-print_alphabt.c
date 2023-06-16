#include <stdio.h>
#include <ctype.h>

/**
* main = Program to print alphabet letters except q and e followed by new line
* Return: return 0 (Success)
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

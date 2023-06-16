#include<stdio.h>
#include<ctype.h>

/**
* main - Prints all combinations of two digits with,
*
*
*Return: 0 (Success)
*/


int main(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 1; b <= 10; b++)
		{
			if (a != b)
			{
			putchar((a);
			putchar((b);

			if (a == 8 && b == 9)
				continue;

			putchar(',');
			putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}

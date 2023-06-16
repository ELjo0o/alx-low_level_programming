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
	int first, second;

	for (first = 0; first <= 9; first++)
	{
		for (second = 1; second <= 10; second++)
		{

			putchar((first % 10) + '0');
			putchar((second % 10) + '1');

			if (first == 8 && second == 9)
				continue;

			putchar(',');
			putchar(' ');

		}



	}

	putchar('\n');
	return (0);

}

#include<stdio.h>
#include<ctype.h>

/**
* main - program that prints all possible combinations of single-digit numbers.
* Return: 0 (Success)
*/

int main(void)
{
	int comb;

	for (comb = '0'; comb <= '9'; comb++)
	{
		putchar(comb);
		if (comb == '9')
			continue;


		putchar(',')
		putchar(' ')
	}

	putchar('\n');
	return (0);
}

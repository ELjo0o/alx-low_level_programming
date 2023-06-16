#include<stdio.h>
#include<ctype.h>

/**
* main - print all base16 number follwed by new line
*
* Return: 0 (Success)
*/


int main(void)
{
	int base;

	for (base = '0'; base <= '9'; base++)
	{
		putchar(base);
		if (base == '9')
		{
			base = 'a';
			for (; base <= 'f' ; base++)
			{
				putchar(base);
			}
			break;
		}
	}

	putchar('\n');
	return (0);
}

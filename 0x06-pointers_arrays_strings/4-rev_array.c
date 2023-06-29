#include "main.h"
#include <stdio.h>

/**
 * reverse_array - the main array.
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */

void reverse_array(int *a, int n);
{
	int x;
	int r;

	for (x = 0; x < n / 2; x++)
	{
		r = a[x];
		a[x] = a[n - x - 1];
		a[n - x - 1] = r;
	}
}


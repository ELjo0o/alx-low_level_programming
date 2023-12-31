#include "main.h"

/**
* free_grid - free the gird.
* @grid: grid of memory.
* @height: int.
* Return: (0).
*/


void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);

	free(grid);
}

#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees memory allocated by alloc_grid
 * @grid: pointer to array of grid
 * @height: outside array length
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

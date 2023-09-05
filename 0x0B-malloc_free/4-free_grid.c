#include "main.h"

/**
 * free_grid -  a function that frees a 2 dimensional grid previously
 *
 * @grid: grid
 * @height:height
*/

void free_grid(int **grid, int height)
{
	int k = 0;

	for (; k < height; k++)
		free(grid[k]);
	free(grid);
}

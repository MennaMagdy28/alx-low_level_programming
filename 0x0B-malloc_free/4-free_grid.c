#include "main.c"

/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: grid
 * @height: height
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}

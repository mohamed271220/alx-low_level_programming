#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: grid to free
 * @height: height of grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
int i = 0;
while (i < height)
free(grid[i++]);
free(grid);
}

#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to 2D array, or NULL if it fails
 */

int **alloc_grid(int width, int height)
{
int **n, i, j;
n = malloc(sizeof(int*n) * height);
if (width <= 0 || height <= 0 || n == 0)
return (0);
else
{
for (i = 0; i < height; i++)
{
n[i] = malloc(sizeof(**n) * width);
if (n[i] == 0)
{
while (i--)
free(n[i]);
free(n);
return (NULL);
}
for (j = 0; j < width; j++)
n[i][j] = 0;
}
}
return (n);
}

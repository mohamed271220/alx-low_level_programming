#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: first integer in array
 * @max: last integer in array
 *
 * Return: pointer to new array
 *         NULL if malloc fails or min > max
 */

int *array_range(int min, int max)
{
int *ptr;
int i, size;

if (min > max)
return (NULL);

size = max - min + 1;

ptr = malloc(sizeof(int) * size);

if (ptr == NULL)
return (NULL);

for (i = 0; i < size; i++)
ptr[i] = min++;

return (ptr);
}

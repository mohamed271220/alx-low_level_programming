#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: size of array
 * @cmp: function pointer
 * Return: index of first element for which cmp does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array && cmp && size > 0)
{
while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
}
return (-1);
}

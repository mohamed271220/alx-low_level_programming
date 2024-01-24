#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: array to iterate
 * @size: size of array
 * @action: function pointer
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int *end = array + size - 1;
if (array && action && size > 0)
while (array <= end)
action(*array++);
}

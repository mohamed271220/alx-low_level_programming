#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 *         NULL if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
char *ptr1;
unsigned int n;
char b = 0;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
return (NULL);

ptr1 = ptr;
n = nmemb * size;
b = 0;
while (n--)
{
*ptr1++ = b;
}

return (ptr);
}

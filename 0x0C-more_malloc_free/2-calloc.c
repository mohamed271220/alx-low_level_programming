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
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
return (NULL);

char *ptr1 = s;
unsigned int n = nmemb * size;
char b = 0;
while (n--)
{
*s++ = b;
}

return (ptr);
}

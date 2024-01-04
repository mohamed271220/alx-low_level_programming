#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: String to be appended to
 * @src: String to append
 * @n: Maximum number of bytes to be used from src
 *
 * Return: Pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = 0;
while (dest[i])
i++;
for (j = 0; src[j] != '\0' && j < n; j++)
dest[i + j] = src[j];
dest[i + j] = '\0';
return (dest);
}

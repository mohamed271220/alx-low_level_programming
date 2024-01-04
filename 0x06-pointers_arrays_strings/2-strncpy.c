#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: String to be copied to
 * @src: String to be copied
 * @n: Maximum number of bytes to be used from src
 *
 * Return: Pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] != '\0' && i < n; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';
return (dest);
}

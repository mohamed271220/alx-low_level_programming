#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated 
 * @str: string to copy
 *
 * Return: pointer to new string, or NULL if it fails
 */

char *_strdup(char *str)
{
int i = 0, j = 0;
char *n;
if (str == NULL)
return (NULL);
for (; str[i] != '\0'; i++)
;
n = malloc(sizeof(*str) * i + 1);
if (n == 0)
return (NULL);
else
{
for (; j < i; j++)
n[j] = str[j];
}
return (n);
}

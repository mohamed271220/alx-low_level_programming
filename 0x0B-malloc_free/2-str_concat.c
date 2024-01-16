#include "main.h"


/**
 * _strlen - returns the length of a string
 * @s: string to check length of
 *
 * Return: length of string
 */

int _strlen(char *s)
{
int i = 0;
for(; *s != '\0'; s++)
;
return (i);
}


/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string, or NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
int size1, size2, i;
char *n;
if (s1 == NULL)
s1 = "\0";
if (s2 == NULL)
s2 = "\0";
size1 = _strlen(s1);
size2 = _strlen(s2);
n = malloc(sizeof(char) * (size1 + size2) + 1);
if (n == 0)
return (0);

for (i = 0; i < size1 + size2; i++)
{
if (i < size1)
n[i] = s1[i];
else
n[i] = s2[i - size1];
}
n[i] = '\0';
return (n);
}

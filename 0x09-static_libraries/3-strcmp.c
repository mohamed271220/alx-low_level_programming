#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string to be compared
 * @s2: Second string to be compared
 *
 * Return: Difference between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] != '\0'; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
}
return (0);
}

#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to a string
 *
 * Return: integer
 */

int _atoi(char *s)
{
int i, j, n, len, f, digit;
i = n = len = f = digit = 0;
j = 1;
while (s[len] != '\0')
len++;
while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
{
if (s[i] == '-')
j *= -1;
i++;
}
while ((s[i] >= '0') && (s[i] <= '9'))
{
digit = s[i] - '0';
if (j < 0)
digit = -digit;
n = n * 10 + digit;
i++;
}
return (n);
}

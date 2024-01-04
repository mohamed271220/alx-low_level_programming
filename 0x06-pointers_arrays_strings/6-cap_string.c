#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: String to be capitalized
 *
 * Return: Pointer to str
 */

char *cap_string(char *str)
{
int i, j;
char sep[] = " \t\n,;.!?\"(){}";
for (i = 0; str[i]; i++)
{
if (str[0] >= 'a' && str[0] <= 'z')
str[0] -= 32;
for (j = 0; sep[j]; j++)
{
if (str[i] == sep[j])
{
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
str[i + 1] -= 32;
}
}
}
return (str);
}

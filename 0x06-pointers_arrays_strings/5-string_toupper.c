#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: String to be changed
 *
 * Return: Pointer to str
 */

char *string_toupper(char *str)
{
int i;
for (i = 0; str[i]; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
}
return (str);
}

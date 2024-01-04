#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: String to be encoded
 *
 * Return: Pointer to str
 */

#include "main.h"

char *leet(char *str)
{
int i, j;
char orig[] = "aAeEoOtTlL";
char leet[] = "4433007711";
for (i = 0; str[i]; i++)
{
for (j = 0; j < 10; j++)
{
if (str[i] == orig[j])
{
str[i] = leet[j];
break;
}
}
}
return (str);
}

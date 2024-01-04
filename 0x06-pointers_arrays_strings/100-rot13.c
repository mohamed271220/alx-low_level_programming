#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: String to be encoded
 *
 * Return: Pointer to s
 */

char *rot13(char *s)
{
int i, j;
char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i]; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == alpha[j])
{
s[i] = rot[j];
break;
}
}
}
return (s);
}

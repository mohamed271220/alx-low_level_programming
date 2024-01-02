#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line
 * @str: pointer to a string
 *
 * Return: void
 */

void puts2(char *str)
{
int len = 0;
while (*str != '\0')
{
++len;
str++;
if (len % 2 == 0)
{
_putchar(*str);
}
}
_putchar('\n');
}

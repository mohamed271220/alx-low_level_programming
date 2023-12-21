#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 *
 * Return: void
 */

void print_line(int n)
{
int ln;
if (n <= 0)
_putchar('\n');
else
{
for (ln = 1; ln <= n; ln++)
_putchar('_');
_putchar('\n');
}
}

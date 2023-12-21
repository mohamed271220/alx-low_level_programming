#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
int ln, spc;
if (n <= 0)
_putchar('\n');
else
{
for (ln = 1; ln <= n; ln++)
{
for (spc = 1; spc < ln; spc++)
_putchar(' ');
_putchar(92);
_putchar('\n');
}
}
}

#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14 /n
 *
 * Return: void
 */

void more_numbers(void)
{
int count, row, num1, num2;
for (row = 0; row < 10; row++)
{
for (count = 0; count <= 14; count++)
{
num1 = count / 10;
num2 = count % 10;
if (num1 != 0)
{
_putchar(num1 + '0');
}
_putchar(num2 + '0');
}
_putchar('\n');
}
}

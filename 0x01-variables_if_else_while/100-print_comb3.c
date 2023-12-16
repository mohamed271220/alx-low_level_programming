#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all possible combinations of two digits
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int i, j, k, l;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
for (k = i; k < 10; k++)
{
for (l = 0; l < 10; l++)
{
if (i == k && j >= l) continue;
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(l + '0');
if (!(i == 9 && j == 8 && k == 9 && l == 9))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return 0;
}

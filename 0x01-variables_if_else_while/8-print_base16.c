#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all the numbers of base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
for (i = 48; i < 103; i++)
{
putchar(i);
if (i == 57)
i += 39;
}
putchar('\n');
return (0);
}

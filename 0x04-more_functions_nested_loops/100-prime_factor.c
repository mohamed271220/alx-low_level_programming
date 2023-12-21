#include "main.h"

/**
 * main - prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0.
 */

int main(void)
{
long int num = 612852475143;
long int div = 2;
long int maxFact;
while (num != 0)
{
if (num % div != 0)
div = div + 1;
else
{
maxFact = num;
num = num / div;
if (num == 1)
{
printf("%ld\n", maxFact);
break;
}
}
}
}

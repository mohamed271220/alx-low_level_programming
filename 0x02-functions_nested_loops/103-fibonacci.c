#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Description: followed by a new line.
 * Return: Always 0.
 */
int main(void)
{
int count;
unsigned long fib1 = 0, fib2 = 1, sum;
float total;
while (1)
{
sum = fib1 + fib2;
if (sum > 4000000)
break;
if ((sum % 2) == 0)
total += sum;
fib1 = fib2;
fib2 = sum;
}
printf("%.0f\n", total);
return (0);
}


#include "main.h"

/**
 * _sqrt - squares a number
 * @x: size of the square
 *
 * Return: square root of x
 */

double _sqrt(int x)
{
float sqrt, t;
sqrt = x / 2;
t = 0;
while (sqrt != t)
{
t = sqrt;
sqrt = (x / t + t) / 2;
}
return (sqrt);
}

/**
 * largest_factor - finds the largest prime factor of a number
 * @num: number to be factored
*/

void largest_factor(long int num)
{
int prime, largest;
while (num % 2 == 0)
num = num / 2;
for (prime = 3; prime <= _sqrt(num); prime = prime + 2)
{
while (num % prime == 0)
{
num = num / prime;
largest = prime;
}
}
if (num > 2)
largest = num;
printf("%d\n", largest);
}

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: 0
 */

int main(void)
{
largest_factor(612852475143);
return (0);
}

#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be evaluated
 *
 * Return: natural square root of n
 */

int sqrt_check(int n, int i);
int _sqrt_recursion(int n)
{
return (sqrt_check(n, 1));
}

/**
 * sqrt_check - checks for the square root of n
 * @n: number to be evaluated
 * @i: iterator
 *
 * Return: square root of n
 */

int sqrt_check(int n, int i)
{
if (n < 0)
return (-1);
else if (n == 0)
return (0);
else if (n == 1)
return (1);
else if (i * i == n)
return (i);
else if (i * i > n)
return (-1);
else
return (sqrt_check(n, i + 1));
}

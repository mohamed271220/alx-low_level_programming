#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be evaluated
 *
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (0);
else
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
if (n == i * i)
return (i);
else if (n > i * i)
return (sqrt_check(n, i + 1));
else
return (-1);
}

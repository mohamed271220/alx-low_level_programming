#include "main.h"

/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 * @i: iterator
 * Return: 1 if n is prime, 0 otherwise
 */

int prime_check(int n, int i);
int is_prime_number(int n)
{
if (n <= 1)
return (0);
else if (n <= 3)
return (1);
else if (n % 2 == 0 || n % 3 == 0)
return (0);
return (prime_check(n, 5));
}

/**
 * prime_check - checks if a number is prime
 * @n: number to be checked
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int prime_check(int n, int i)
{
if (i * i > n)
return (1);
else if (n % i == 0)
return (0);
else
return (prime_check(n, i + 2));
}

#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * @len: length of s
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int palindrome_check(char *s, int len);
int _strlen_recursion(char *s);
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
return (palindrome_check(s, len));
}

/**
 * palindrome_check - checks if a string is a palindrome
 * @s: string to be checked
 * @len: length of s
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int palindrome_check(char *s, int len)
{
if (len <= 1)
return (1);
else if (*s == *(s + len - 1))
return (palindrome_check(s + 1, len - 2));
else
return (0);
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be measured
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

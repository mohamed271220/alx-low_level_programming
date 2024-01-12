#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if the strings can be
 * considered identical, otherwise return 0
 * @s1: first string to be compared
 * @s2: second string to be compared - may contain wildcard *
 *
 * Return: 1 if strings match, 0 if not
 */

int wildcard(char *s1, char *s2);
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
else if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
else if (*s2 == '*')
return (wildcard(s1, s2 + 1));
else
return (0);
}

/**
 * wildcard - checks for wildcard * in s2
 * @s1: first string to be compared
 * @s2: second string to be compared - may contain wildcard *
 *
 * Return: 1 if strings match, 0 if not
 */

int wildcard(char *s1, char *s2)
{
if (*s2 == '*')
return (wildcard(s1, s2 + 1));
else if (*s2 == '\0' && *s1 != '\0')
return (0);
else if (*s1 == '\0' && *s2 == '\0')
return (1);
else if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
else
return (wildcmp(s1 + 1, s2));
}
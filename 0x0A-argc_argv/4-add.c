#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
*/

int main(int argc, char const *argv[])
{
int sum = 0;
char *p;
while (--argc)
{
for (p = argv[argc]; *p; p++)
if (*p < '0' || *p > '9')
return (printf("Error\n"), 1);
sum += atoi(argv[argc]);
}
printf("%d\n", sum);
return (0);
}

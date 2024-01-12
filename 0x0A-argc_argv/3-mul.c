#include <stdio.h>
#include <stdlib.h>

/**
 * main - that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 , non-zero if error
*/

int main(int argc, char const *argv[])
{
int sum;
if (argc != 3)
{
printf("Error\n");
return (1);
}
sum = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", sum);
return (0);
}

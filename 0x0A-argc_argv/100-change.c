#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of money.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
*/

int main(int argc, char const *argv[])
{
if (argc == 2)
{
int i, leastcents = 0, cents = atoi(argv[1]);
int coins[] = {25, 10, 5, 2, 1};

for (i = 0; i < 5; i++)
{
if (cents >= coins[i])
{
leastcents += cents / coins[i];
cents = cents % coins[i];
if (cents % coins[i] == 0)
{
break;
}
}
}
printf("%d\n", leastcents);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}

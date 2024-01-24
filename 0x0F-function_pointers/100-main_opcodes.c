#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
char *ptr = (char *)main;
int i, bytes;
if (argc != 2)
printf("Error\n"), exit(1);
bytes = atoi(argv[1]);
if (bytes < 0)
printf("Error\n"), exit(2);
for (i = 0; i < bytes; i++)
printf("%02hhx", ptr[i]);
printf("\n");
return (0);
}

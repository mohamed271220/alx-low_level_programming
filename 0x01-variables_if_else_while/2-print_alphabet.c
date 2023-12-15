#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
char character = 'a';
while (character <= 'z')
{
putchar(character);
character++;
putchar('\n');
}
return (0);
}

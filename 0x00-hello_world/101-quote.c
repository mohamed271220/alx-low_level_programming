#include<unistd.h>
/**
 * main - Entry point
 * Description: prints a string with write
 * Return: Always 1 (not Success)
 */
int main(void)
{
char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, quote, sizeof(quote) - 1);
return (1);
}

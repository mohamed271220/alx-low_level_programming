#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to head of list_t list
 * Return: number of nodes in h
 */

size_t print_list(const list_t *h)
{
size_t nodes = 0;

while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", _strlen(h->str), h->str);
nodes++;
h = h->next;
}
return (nodes);
}


/**
* _strlen - returns the length of a string
* @s: string
* Return: length of string
*/

int _strlen(char *s)
{
int i;
if (!s)
return (0);
for (i = 0; s[i] != '\0'; i++)
;
return (i);
}

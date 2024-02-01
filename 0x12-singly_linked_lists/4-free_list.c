#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to head of list_t list
 * Return: void
 */

void free_list(list_t *head)
{
list_t *temp;
list_t *next;

if (!head)
return;
temp = head;
while (temp)
{
next = temp->next;
free(temp->str);
free(temp);
temp = next;
}
}

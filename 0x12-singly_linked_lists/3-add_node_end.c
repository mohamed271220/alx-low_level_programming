#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to pointer of first node of list_t list
 * @str: string to be added to list_t list
 * Return: address of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *temp;
unsigned int len = 0;

new = malloc(sizeof(list_t));
if (new == NULL || head == NULL)
return (NULL);

new->str = strdup(str);
while (str[len])
len++;
new->len = len;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

temp = *head;
while (temp->next)
temp = temp->next;
temp->next = new;

return (new);
}

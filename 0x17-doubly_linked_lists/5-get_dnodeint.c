#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t list
* @head: pointer to the head of the list
* @index: index of the node to return
* Return: the nth node of a dlistint_t list
*/


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}

	return (head);
}

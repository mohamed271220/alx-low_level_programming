#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at
* index of a dlistint_t linked list
* @head: pointer to the head of the list
* @index: index of the node to delete
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *next_node;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
		{
			return (-1);
		}
		current = current->next;
	}

	next_node = current->next;
	current->prev->next = next_node;
	if (next_node != NULL)
	{
		next_node->prev = current->prev;
	}
	free(current);

	return (1);
}

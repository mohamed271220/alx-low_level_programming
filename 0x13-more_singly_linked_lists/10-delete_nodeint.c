#include  "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index of a listint_t list
* @head: pointer to the pointer to the list
* @index: the index of the node to delete
*
* Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}

	prev = *head;
	temp = prev->next;
	for (i = 1; i < index; i++)
	{
		if (!temp)
			return (-1);
		prev = temp;
		temp = temp->next;
	}

	prev->next = temp->next;
	free(temp);

	return (1);
}

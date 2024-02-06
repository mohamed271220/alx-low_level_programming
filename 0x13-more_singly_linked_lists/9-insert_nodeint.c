#include "lists.h"


/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to the pointer to the list
* @idx: index of the list where the new node should be added
* @n: data to be added to the new node
*
* Return: the address of the new node, or NULL if it failed
*/


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i;

	if (!head)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(head, n));

	temp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (!temp)
			return (NULL);
		temp = temp->next;
	}

	if (!temp)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (new);
}

/**
* add_nodeint - adds a new node at the beginning of a listint_t list
* @head: pointer to the pointer to the list
* @n: integer to be included in the new node
*
* Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}


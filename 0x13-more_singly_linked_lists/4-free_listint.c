#include "lists.h"

/**
* free_listint - frees a listint_t list
* @head: pointer to the list to be freed
*
* Return: void
*/


void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

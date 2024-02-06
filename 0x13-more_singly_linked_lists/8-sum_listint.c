#include "lists.h"

/**
* sum_listint - returns the sum of all the data (n) of a listint_t list
* @head: pointer to the list
*
* Return: the sum of all the data (n) of the list
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

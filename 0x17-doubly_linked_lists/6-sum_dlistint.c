#include "lists.h"

/**
 * sum_dlistint - sum the values of the nodes in dlistint_t
 * @head: pointer to the head of the list
 * Return: if the list is empty return 0.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}

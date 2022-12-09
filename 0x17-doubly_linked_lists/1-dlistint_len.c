#include "lists.h"

/**
 * dlistint_len - returns all the number of elements in linked dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *tmp = h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: pointre to the list to free
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

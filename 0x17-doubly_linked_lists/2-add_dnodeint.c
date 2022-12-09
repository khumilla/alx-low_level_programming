#include "lists.h"

/**
 * add_dnodeint - adds a new node to the beginning of dlistint_t
 * @head: a pointer to the head of dlistint_t
 * @n: integer for the new node
 * 
 * Return: address of the new node on SUCCESS
 * 	   NULL if fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}



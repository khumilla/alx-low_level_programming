#include "lists.h"
#include <string.h>

/**
 * add_node - fucntion to add new node to head of list_t
 * @head: pointer to list_t's head
 * @str: string to be added to list_t
 *
 * Return: if succesful address of new element; NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}


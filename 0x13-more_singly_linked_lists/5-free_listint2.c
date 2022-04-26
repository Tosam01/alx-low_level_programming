#include "lists.h"

/**
 * free_listint2 - frees a listint_t and sets head to NULL
 * @head: a pointer to a pointer the first node
 */

void free_listint2(listint_t **head)
{
	if (head && *head)
	{
		free_listint2(&(*head)->next);
		free(*head);
		*head = NULL;
	}
}

#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: a pointer to a pointer to the first node
 * @idx: the index at which to add the new node (starting at 0)
 * @n: the list element
 *
 * Return: NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;

	if (!head)
		return (NULL);
	if (idx && *head)
		return (insert_nodeint_at_index(&(*head)->next, idx - 1, n));
	if (idx)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}

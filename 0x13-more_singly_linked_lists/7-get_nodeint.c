#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @index: index of the node
 * @head: pointer to the first node
 *
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head && index)
		return (get_nodeint_at_index(head->next, index - 1));
	return (head);
}

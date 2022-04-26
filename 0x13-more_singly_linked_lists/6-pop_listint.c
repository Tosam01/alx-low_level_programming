#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * and returns the head node's data (n) if the linked list
 * is empty
 * @head: a pointer to a pointer to the first node
 *
 * Return: the first list element, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *old;

	if (!(head && *head))
		return (0);

	data = (*head)->n;

	old = *head;
	*head = old->next;
	free(old);

	return (data);
}

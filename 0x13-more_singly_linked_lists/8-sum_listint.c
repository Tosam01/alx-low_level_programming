#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of a linked list
 * @head: a pointer to the first node
 *
 * Return: sum of all list elements, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	return (head ? head->n + sum_listint(head->next) : 0);
}

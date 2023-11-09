#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: head of list
 * @n: value of  element
 *
 * Description:adds a new node at beginning
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ne;
	dlistint_t *x;

	ne = malloc(sizeof(dlistint_t));
	if (ne == NULL)
		return (NULL);

	ne->n = n;
	ne->prev = NULL;
	x = *head;

	if (x != NULL)
	{
		while (x->prev != NULL)
			x = x->prev;
	}

	ne->next = x;

	if (x != NULL)
		x->prev = ne;

	*head = ne;

	return (ne);
}

#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at end
 * @head: head of list
 * @n: value of element
 *
 * Description: adds new node at end
 * Return: address of new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *x;
	dlistint_t *ne;

	ne = malloc(sizeof(dlistint_t));
	if (ne == NULL)
		return (NULL);

	ne->n = n;
	ne->next = NULL;

	x = *head;

	if (x != NULL)
	{
		while (x->next != NULL)
			x = x->next;
		x->next = ne;
	}
	else
	{
		*head = ne;
	}

	ne->prev = x;

	return (ne);
}

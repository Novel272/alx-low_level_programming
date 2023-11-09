#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * @h: head of list
 *
 * Description:return number of elements
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int coun;

	coun = 0;

	if (h == NULL)
		return (coun);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		coun++;
		h = h->next;
	}

	return (coun);
}

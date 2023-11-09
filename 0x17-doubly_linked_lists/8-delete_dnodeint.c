#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: head of list
 * @index: index of new node
 *
 * Description:deletes a node
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *x1;
	dlistint_t *x2;
	unsigned int v;

	x1 = *head;

	if (x1 != NULL)
		while (x1->prev != NULL)
			x1 = x1->prev;

	v = 0;

	while (x1 != NULL)
	{
		if (v == index)
		{
			if (v == 0)
			{
				*head = x1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				x2->next = x1->next;

				if (x1->next != NULL)
					x1->next->prev = x2;
			}

			free(x1);
			return (1);
		}
		x2 = x1;
		x1 = x1->next;
		v++;
	}

	return (-1);
}

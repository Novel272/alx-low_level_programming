#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node
 * @h: head of list
 * @idx: index of new node
 * @n: value of new node
 *
 * Description:insert new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ne;
	dlistint_t *head;
	unsigned int i;

	new = NULL;
	if (idx == 0)
		new = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					ne = add_dnodeint_end(h, n);
				else
				{
					ne = malloc(sizeof(dlistint_t));
					if (ne != NULL)
					{
						ne->n = n;
						ne->next = head->next;
						ne->prev = head;
						head->next->prev = ne;
						head->next = ne;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}

	return (ne);
}

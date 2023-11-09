#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node of  dlistint_t linked list.
 * @head: pointer head of list
 * @index: index of node to search for, start from 0
 *
 * Description:return node of list
 * Return:  node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int siz;
	dlistint_t *tm;

	siz = 0;
	if (head == NULL)
	return (NULL);

	tm = head;
	while (tm)
	{
	if (index == siz)
	return (tm);
	siz++;
	tm = tm->next;
	}
	return (NULL);
}

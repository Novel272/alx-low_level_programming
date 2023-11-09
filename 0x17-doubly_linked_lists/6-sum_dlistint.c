#include "lists.h"

/**
 * sum_dlistint - return  sum of the data
 * @head: head of list
 *
 * Description:retrun sum of data
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int su;

	su = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			su += head->n;
			head = head->next;
		}
	}

	return (su);
}

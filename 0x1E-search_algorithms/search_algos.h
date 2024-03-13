#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singlys linked lists
 *
 * @n: integer
 * @index: index of node in list
 * @next: pointer to next node
 *
 * Description: singly linked lists node structure
 * for Holbertons projects
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - singly linked list with express lane
 *
 * @n: Integer
 * @index:index of the node in the list
 * @next:pointer to next node
 * @express:pointer to next node in express lane
 *
 * Description: single linked list node structure with express lane
 * for Holbertons projects
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* SEARCH_ALGOS_H */

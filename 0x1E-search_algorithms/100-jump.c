#include "search_algos.h"

#define PRINT_CHECKED(idx, item) \
	printf("Value checked array[%lu] = [%d]\n", (idx), (item))

#define PRINT_BOUNDED(low, high) \
	printf("Value found between indexes [%lu] and [%lu]\n", (low), (high))

/**
 * jump_search - search for value in sorted array of integers
 * @array:array of values
 * @size:number of values
 * @value:value to locate
 *
 * Return:value not present in array or array is NULL, return -1.
 * Otherwise, returnn first index where value located.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j = 0;

	if (array && size)
	{
		while (j < size && array[j] < value)
		{
			PRINT_CHECKED(j, array[j]);
			i = j, j += 3;
		}
		PRINT_BOUNDED(i, j);
		if (size <= j)
			j = size - 1;
		while (i <= j)
		{
			PRINT_CHECKED(i, array[i]);
			if (array[i] == value)
				return (i);
			++i;
		}
	}
	return (-1);
}

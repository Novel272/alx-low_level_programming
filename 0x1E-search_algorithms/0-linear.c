#include "search_algos.h"

#define VALUE_CHECKED(array, index) \
	printf("Value checked array[%lu] = [%d]\n", index, array[index])

/**
 * linear_search - search for value in array of integers
 * @array:array of values
 * @size:number of values
 * @value:value to locate
 *
 * Return: value is not present in array or array is NULL, return -1.
 * Otherwise, returh first index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; ++i)
		{
			VALUE_CHECKED(array, i);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}

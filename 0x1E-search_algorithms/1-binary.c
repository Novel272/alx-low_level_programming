#include "search_algos.h"

/**
 * print_array - print values in array
 * @array: the array of values
 * @lo: the smallest index
 * @hi: the greatest index
 */
static void print_array(int *array, size_t lo, size_t hi)
{
	printf("Searching in array: ");
	while (lo <= hi)
	{
		if (lo < hi)
			printf("%d, ", array[lo++]);
		else
			printf("%d\n", array[lo++]);
	}
}

/**
 * _binary_search - search for value in sorted array of integers
 * @array: array of values
 * @lo: smallest index
 * @hi: greatest index
 * @value: value to locate
 *
 * Return: If value not present in array or array is NULL, return -1.
 * Otherwise, returh first index where value is located.
 */
static int _binary_search(int *array, size_t lo, size_t hi, int value)
{
	size_t mid = (lo + hi) / 2;

	if (lo > hi)
		return (-1);

	print_array(array, lo, hi);
	if (array[mid] < value)
		return (_binary_search(array, mid + 1, hi, value));
	if (array[mid] > value)
		return (_binary_search(array, lo, mid - 1, value));
	return (mid);
}

/**
 * binary_search - search for value in sorted array of integers
 * @array: array of values
 * @size: number of values
 * @value:value to locate
 *
 * Return:value is not present in array or array is NULL, return -1.
 * Otherwise, returh first index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	return (array && size ? _binary_search(array, 0, size - 1, value) : -1);
}

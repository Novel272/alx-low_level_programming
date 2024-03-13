#include "search_algos.h"

#define PRINT_CHECKED(array, index) \
	(printf("Value checked array[%lu] = [%d]\n", (mid), (array)[mid]))

#define PRINT_NOT_IN_RANGE(index) \
	(printf("Value checked array[%lu] is out of range\n", (mid)))

#define MID_POS(arr, lo, hi, val) \
	((lo) + (double)((hi) - (lo)) / ((arr)[hi] - (arr)[lo]) * ((val) - (arr)[lo]))

/**
 * interpolation_search - search for value in sorted array of integers
 * @array: array of values
 * @size: number of values
 * @value: value to locate
 *
 * Return: If value not present array or array NULL, return -1.
 * Otherwise, returnn first index where value located.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lo = 0, hi = size - 1, mid = 0;

	if (array && size)
	{
		while (1)
		{
			mid = MID_POS(array, lo, hi, value);

			if (mid > hi)
				break;

			PRINT_CHECKED(array, mid);

			if (lo == hi)
				return (array[lo] == value ? (int) lo : -1);

			if (array[mid] == value)
				return (mid);

			if (array[mid] < value)
				lo = mid + 1;
			else
				hi = mid - 1;
		}
		PRINT_NOT_IN_RANGE(mid);
	}
	return (-1);
}

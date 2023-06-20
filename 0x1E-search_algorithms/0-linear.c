#include "search_algos.h"

/**
 * Function that searches for a value in an array of integers using the Linear search algorithm
 *
 * @array: list to search through
 * @size: the ength of (number of elements in) the array
 * @value: value to search for
 *
 * Return: the index of first value match, -1 if not present or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

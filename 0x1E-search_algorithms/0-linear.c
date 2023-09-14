#include "search_algos.h"

/**
 * linear_search - Search for a value in an array using Linear Search.
 *
 * @array: Pointer to the array to be searched.
 * @size: The size of the array.
 * @value: The value to be searched for.
 *
 * Return: If the value is found, return the index of the first occurrence,
 *         otherwise, return -1.
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}

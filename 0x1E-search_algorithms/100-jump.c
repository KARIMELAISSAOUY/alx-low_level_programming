#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Searches for a value in an array of integers
 *               using the Jump search algorithm.
 *
 * @array: Pointer to the input array.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: If the value is found, return the index of the value.
 *         Otherwise, return -1.
 *
 * Description: This function uses the Jump search algorithm to
 *              efficiently find a value in a sorted array. It
 *              returns the index of the value if found, or -1 if
 *              not present in the array.
 */
int jump_search(int *array, size_t size, int value)
{
	int index, m, k, prev;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	k = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		k++;
		prev = index;
		index = k * m;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}

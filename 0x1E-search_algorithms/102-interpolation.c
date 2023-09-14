#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in an array of integers
 *                       using the Interpolation search algorithm.
 *
 * @array: Pointer to the input array.
 * @size: The size of the array.
 * @value: The value to search for.
 *
 * Return: If the value is found, return the index of the value.
 *         Otherwise, return -1.
 *
 * Description: This function uses the Interpolation search algorithm
 *              to efficiently locate a value in a sorted array. It returns
 *              the index of the value if found, or -1 if the value is not
 *              present in the array. The Interpolation search is most
 *              effective when the array is uniformly distributed.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;
	double f;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		f = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		pos = (size_t)(low + f);
		printf("Value checked array[%d]", (int)pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

		if (low == high)
			break;
	}

	return (-1);
}

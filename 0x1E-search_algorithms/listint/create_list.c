#include <stdlib.h>
#include "../search_algos.h"

void free_list(listint_t *list);
/**
 * create_list - Creates a singly linked list.
 *
 * @array: Pointer to the array used to fill the list.
 * @size: Size of the array.
 *
 * Return: A pointer to the head of the created list (NULL on failure).
 *
 * Description: This function takes an array and its size as input and
 * creates a singly linked list using the elements of the array. It returns
 * a pointer to the head of the created list or NULL if the operation fails.
 */
listint_t *create_list(int *array, size_t size)
{
	listint_t *list;
	listint_t *node;

	list = NULL;
	while (array && size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
		{
			free_list(list);
			return (NULL);
		}
		node->n = array[size];
		node->index = size;
		node->next = list;
		list = node;
	}
	return (list);
}
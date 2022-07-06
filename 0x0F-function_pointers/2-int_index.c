#include "function_pointers.h"

/**
 * int_index - gets the integer value
 * @array: integer array.
 * @size: the array size
 * @cmp: pointer to the function
 * for compareing values
 *
 * Return: if the cmp function does not return 0
 * retun index of the 1st element with no matching elements,
 * return -1. if size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if  (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}

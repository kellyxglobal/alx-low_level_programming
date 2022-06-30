#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integer values.
 * @min: min value.
 * @max: max value.
 *
 * Return: point to the newly created array.
 * if min > mix, returns NULL.
 * returns NULL if malloc fails.
 */
int *array_range(int min, int max)
{
	int *ax;
	int i;

	if (min > max)
		return (NULL);

	ax = malloc(sizeof(*ax) * ((max - min) + 1));

	if (ax == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ax[i] = min;

	return (ax);
}

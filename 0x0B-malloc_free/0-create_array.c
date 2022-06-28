#include "main.h"
#include <stdlib.h>
/**
 * create_array - makes an array of chars.
 * @size: the array size
 * @c: variable type char
 *
 * Return: char array pointer for xy
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *xy;

	if (size == 0)
		return (NULL);

	xy = (char c) malloc(size * sizeof(char));

	if (xy == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		xy[i] = c;

	return (xy);
}

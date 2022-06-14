#include "main.h"

/**
 * swap_int - This is the function that swaps
 * two integer values
 * @a: integer one
 * @b: integer two
 * Return: No return
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

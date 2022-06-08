#include "main.h"

/**
 * times_table - A program to print 9 time table
 *
 * Return Success 0 -
 */
void times_table(void)
{
	int n = 9;
	int count = 0;

	do {
		_putchar('d * d = \n', count, n * count);
		count++;
	} while (count <= 9);

	return (0);
}

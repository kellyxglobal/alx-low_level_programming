#include "main.h"

/**
 * _memset - Fill the n byte memory with a constant value
 * @s: pointer to memory area
 * @b: constant byte value
 * @n: number of bytes to fill
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n);
{
	int s = n;

	if (s > 0)
	{
		int i;

		for (i = 0; i < s; i++)
			s[i] = b;
	}

	return (s);
}

#include "main.h"

/**
 * _strcat - concatenates two strings together,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int length, width;

	width = 0;

	for (length = 0; dest[length]; length++)
	{

	while (*(src + width))
	{
		*(dest + length) = *(src + width);

		length++;
		width++;
	}

	}
	return (dest);
}


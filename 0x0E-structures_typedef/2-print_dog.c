#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog.
 * @d: struct dog.
 *
 * Return: no return.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}

#include "dog.h"

/**
 * init_dog - a variable of type struct dog.
 * @d: struct dog.
 * @name: give him a cute name.
 * @age: how old is he.
 * @owner: you can own the dog.
 *
 * Return: return nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

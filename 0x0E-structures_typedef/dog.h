#ifndef _STRUCT_DOG_H_
#define _STRUCT_DOG_H_

/**
 * struct dog - a new data type with three dog features.
 * @name: give him a sweet name
 * @age: determine his age
 * @owner: you can own it with just a little token
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

#include <stddef.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name : string
 * @age : integer
 * @owner : string
 * Return: d
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == 0)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}

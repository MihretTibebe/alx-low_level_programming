#include "dog.h"
/**
 * init_dog - initializes dog
 * @d : dog structure
 * @name : string
 * @age : integer
 * @owner : string
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

#include "dog.h"
#include <stddef.h>
/**
 * print_dog - prints a struct dog
 * @d : dog structure
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

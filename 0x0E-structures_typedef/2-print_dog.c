#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d : dog structure
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
				d->name != NULL ? d->name : "nill", d->age,
			d->owner != NULL ? d->owner : "nill");
	}
}

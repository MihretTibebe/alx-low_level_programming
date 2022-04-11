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
		if (d->name == NULL)
			 printf("nill");
		else
			printf("%s", d->name);
		 if (d->age == 0)
			 printf("nill");
		else
			printf("%f", d->age);
		if (d->owner == NULL)
			printf("nill");
		else
			printf("%s", d->owner);
	}
}

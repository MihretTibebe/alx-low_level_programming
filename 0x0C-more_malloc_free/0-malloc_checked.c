#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b : int
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	return (p);
}

#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min : int
 * @max : int
 * Return: int
 */

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));

	for (i = 0; min <= max; i++, min++)
	{
		p[i] = min;
	}
return (p);
}


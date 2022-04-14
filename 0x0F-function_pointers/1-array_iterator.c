#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter on each element of an array
 *
 * @array : array of integers
 * @size : size of an array
 * @action : function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (*action == NULL || *array == NULL)
		exit(1);

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

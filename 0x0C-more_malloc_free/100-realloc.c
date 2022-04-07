#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _memset - set a memory
 * @p : char
 * @a : char
 * @n : int
 * Return: char
 */

char *_memset(char *p, char *a, int n)
{
	char *s = p;

	while (n--)
	{
		*s++ = *a++;
	}
return (s);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr : void pointer
 * @old_size : unsigned int
 * @new_size : unsigned int
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (ptr);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		_memset(p, ptr, old_size);
	}
return (p);
}

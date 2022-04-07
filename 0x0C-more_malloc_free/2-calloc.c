#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _memset - set memory
 * @s : char
 * @a : char
 * @n : unsigned int
 * Return: char pointer
 */

char *_memset(char *s, char a, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = a;
return (p);
}

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb : unsigned int
 * @size : unsigned int
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == 0)
		return (NULL);

	_memset(p, 0, nmemb * size);
return (p);
}

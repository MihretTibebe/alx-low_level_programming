#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size : int
 * @c : char
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	ch = malloc(sizeof(char) * size);
	if (size == 0 || ch == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ch[i] = c;
	}
	return (ch);
}

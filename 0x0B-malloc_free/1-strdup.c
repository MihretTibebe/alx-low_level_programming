#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str : string
 * Return: pointer
 */
char *_strdup(char *str)
{
	unsigned int i = 0, size = 0;
	char *ch;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		size++;
		i++;
	}

	ch = malloc(sizeof(char) * size + 1);

	if (ch == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		ch[i] = str[i];
	}
	return (ch);
}

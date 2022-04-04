#include "main.h"
#include <stdlib.h>

/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
int size = 0;
for (; s[size] != '\0'; size++)
;
return (size);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac : int
 * @av : string
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	char *c;
	int i = 0, j = 0, k, size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++)
	{
		size += _strlen(av[i]);
	}

	c = malloc(sizeof(char) * size + ac);
	k = sizeof(c);

	for (i = 0; c[i] < 10; i++)
	{
		for (; av[i][j] != '\0'; j++)
		{
			c[i] = av[i][j];
		}
		c[i + 1] = '\n';
	}
	return (c);
}

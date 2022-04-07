#include "main.h"
#include <stdlib.h>

/**
 *  _strlen - return length of a string
 *  @s : string
 *  Return: int
 */

unsigned int _strlen(char *s)
{
	unsigned int i = 0;

	if (s == NULL)
		return (0);

	for (; s[i] != '\0'; i++)
		;

	return (i);
}

/**
 * string_nconcat - concatentes two strings
 * @s1 : string
 * @s2 : string
 * @n : int
 * Return: stirng
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int i, k = 0;
	unsigned int j;
	int ko;

	s = malloc(_strlen(s1) + n + 1);

	if (s == 0)
		return (NULL);

	if (n >= _strlen(s2))
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			ko = i;
			s[i] = s1[i];
		}

		for (j = ko + 1; s2[i] != '\0'; j++)
		{
		s[j] = s2[k];
		k++;
	}

		s[j + 1] = '\0';
	}
	else
	{
	for (i = 0; s1[i] != '\0'; i++)
	{ ko = i;
		s[i] = s1[i];
	}
	for (j = ko + 1; j < (_strlen(s1) + n + 1); j++)
	{
		s[j] = s2[k];
		k++;
	}
	s[j + 1] = '\0';
	}
	return (s);
}

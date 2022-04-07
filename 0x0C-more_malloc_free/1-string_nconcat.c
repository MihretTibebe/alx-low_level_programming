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
int i;
unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n < _strlen(s2))
		s = malloc(_strlen(s1) + n * sizeof(char) + 1);
	else
		s = malloc(_strlen(s1) + _strlen(s2) + 1);

	if (s == 0)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; j++, i++)
		s[i] = s2[j];

s[i + 1] = '\0';

return (s);
}

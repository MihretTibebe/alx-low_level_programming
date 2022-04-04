#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * str_concat - concatenates two strings
 * @s1 : string
 * @s2 : string
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0;
	char *ch;

	for (; s1[i] != '\0'; i++)
	;
	for (; s2[j] != '\0'; j++)
	;

	ch = malloc(sizeof(char) * (i + j) + 1);

	if (ch == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ch[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		ch[i + j] = s2[j];
	}
	return (ch);
}

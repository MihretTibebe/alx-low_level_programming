#include "main.h"
#include <stddef.h>
/**
 * _strchr -  locates a character in a string
 * @s : string
 * @c : char to be searched from s;
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i;

	if (c == '\0')
	return ('\0');
	else
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		return (s + i);
	}
	return (NULL);
}

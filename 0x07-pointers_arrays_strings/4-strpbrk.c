#include "main.h"
#include <stddef.h>
/**
 *_strpbrk - gets the length of a prefix substring
 *
 * @s : string to be searched
 * @accept : accept string
 * Return: int
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *r;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				r = &s[i];
				return (r);
			}
		}
	}
	return (NULL);
}

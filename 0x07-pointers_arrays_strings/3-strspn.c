#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s : string to be searched
 * @accept : accept string
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int count = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			count++;
		}
	}
return (count);

}

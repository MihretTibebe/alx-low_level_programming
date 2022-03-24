#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s : string to be encoded
 *
 * Return: string
 */
char *leet(char *s)
{
	int i, j;
	char c[] = "AEOTL";
	char sm[] = "aeotl";
	char num[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == c[j] || s[i] == sm[j])
				s[i] = num[j];
		}
	}
return (s);
}


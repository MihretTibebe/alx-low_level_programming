#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s : string to be converted
 *
 * Return: string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
		}
	}

	return (s);
}

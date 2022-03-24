#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s : string to be converted
 *
 * Return: string
 */
char *rot13(char *s)
{
	int i, j;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A'))
		&& s[i] == in[j])
			s[i] = out[j]
		}
	}
}

#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest : destination string
 * @src : source string
 * @n : size of string to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
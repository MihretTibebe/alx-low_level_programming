#include <main.h>
/**
 * _memset - fills memory with a constant byte
 * @s : string to be chenged;
 * @b : the byte which is used to change
 * @n : size of memory to be filled
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

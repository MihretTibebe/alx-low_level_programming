#include "main.h"

/**
 * _strncpy - copies a string
 * @dest : destination string
 * @src : source string
 * @n : index of last char
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
int k = 0;

while (src[i] != '\0')
{
i++;
}

if (n < i)
{
while (j < n)
{
dest[k] = src[j];
j++;
k++;
}
}
else
{
while (src[j] != '\0')
{
dest[k] = src[j];
j++;
k++;
}
dest[k] = '\0';
}

return (dest);
}


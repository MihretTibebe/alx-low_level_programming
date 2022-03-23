#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest : destination string
 * @src : source string
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
int i;
int j = 0;
while (dest[i])
{
i++;
}
do {
dest[i] = dest[i] + src[j];
i++;
j++;
}
while (src[j] != '\0');
dest[i] = dest[i] + '\0';
return (dest);
}

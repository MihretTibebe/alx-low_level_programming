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
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
do {
dest[i] =  src[j];
i++;
j++;
} while (src[j]);
return (dest);
}

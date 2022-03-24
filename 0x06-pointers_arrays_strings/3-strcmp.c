#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1 : first string
 * @s2 : second string
 *
 * Return: 0 or 1
 */

int _strcmp(char *s1, char *s2)
{
int i, j;
char m, n, r;
i = 0;
j = 0;

while (s1[i] != '\0')
{
m += s1[i];
i++;
}
while (s2[j] != '\0')
{
n += s2[j];
j++;
}

r = m - n;
return (r);
}


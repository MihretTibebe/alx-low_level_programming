#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c : character to be checked
 * Return: 0 or 1
 */
int _isalpha(int c)
{
int i;
for (i = 97; i <= 122; i++)
{
if (c == i)
return (1);
}
for (i = 65; i <= 90; i++)
{
if (c == i)
return (1);
}
return (0);
}


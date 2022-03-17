#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c : charachter to be checked
 * Return: 1 or 0
 */
int _isupper(int c)
{
int i;
for (i = 65; i <= 90; i++)
{
if (c == i)
return (1);
}
return (0);
}

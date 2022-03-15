#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c : character to be checked
 * Return: 0 or 1
 */
int _islower(int c)
{
int i;
for (i = 97; i <= 122; i++)
{
if (c == i)
return (1);
}
return (0);
}


#include "main.h"
/**
 * print_rev -  prints a string, in reverse
 *
 * @s : string to be printed in reverse
 */

void print_rev(char *s)
{
int i = 0;
while (s[i])
{
i++;
}
while (s[i] >= 0)
{
putchar(s[i]);
i--;
}
putchar('\n');
}


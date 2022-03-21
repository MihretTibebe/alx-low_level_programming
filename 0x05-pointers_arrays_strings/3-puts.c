#include "main.h"
/**
 * _puts -  prints a string, followed by a new line
 *
 * @str : string to be printed
 */

void _puts(char *str)
{
int i;
while (str[i])
{
putchar(str[i]);
i++;
}
putchar('\n');
}


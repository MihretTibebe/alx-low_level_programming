#include "holberton.h"

/**
 * print_diagonal - check for a digit
 * @n : number of \\ to be printed
 * Return:void
 */
void print_diagonal(int n)
{
int i = 0;
int j;
while (i < n)
{
for (j = 0; j <= i; j++)
{
_putchar(' ');
}
_putchar('\\' + '\n');
i++;
}
}

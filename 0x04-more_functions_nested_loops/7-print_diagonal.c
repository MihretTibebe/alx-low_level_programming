#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n : number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
int i = 0;
int j;
while (i < n)
{
for (j = 0; j <= i; j++)
{
_putchar('\\');
}
_putchar('\n');
}
}

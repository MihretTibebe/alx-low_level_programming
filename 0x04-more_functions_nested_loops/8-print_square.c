#include "main.h"

/**
 * print_square - prints a square
 * @size : size of the square
 * Return: void
 */
void print_square(int size)
{
int i = 0;
int j;
while (i < size)
{
for (j = 0; j < size; j++)
{
_putchar('#');
j++;
}
_putchar('\n');
}
_putchar('\n');
}

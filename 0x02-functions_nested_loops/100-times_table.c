#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n : ineger number
 * Return: void
 */
void print_times_table(int n)
{
int i;
int r;
while (n >= 0 && n <= 15)
{
int i;
while (i <= n)
{
r = i * n;
if (r == 0)
{
_putchar('0' + r);
}
else if (r < 10)
{
_putchar(10 + 10 + 10);
_putchar('0' + r);
}
else if (r < 100)
{
_putchar(10 + 10);
_putchar('0' + r / 10);
_putchar('0' + r % 10);
}
else
{
_putchar(' ');
_putchar('0' + r / 100);
_putchar('0' + (r & 100) / 10);
_putchar('0' + r % 10);
}
i++;
}
n++;
}

}


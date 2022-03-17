#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
int i = 0;
char a, b;
while (i < 10)
{
for (a = 0; a <= 14; a++)
{
c = a;
if (a > 9)
{
c = a % 10;
_putchar('1');
}
_putchar('0' + c);
}
_putchar('\n');
}
}

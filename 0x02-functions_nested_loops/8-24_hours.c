#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: 0 or 1 or -1
 */
void jack_bauer(void)
{
int i;
int j;
int k;
int l;

for (i = 48; i <= 57; i++)
{
_putchar(i);
for (j = 48; j <= 57; j++)
{
_putchar(j);
}
_putchar('-');
for (k = 48; k <= 54; k++)
{
_putchar(k);
}
for (l = 48; l <= 57; l++)
{
_putchar(l);
}
}

}


#include <stdio.h>

/**
 * main - start piont
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
if (i != j && i < j)
{
putchar(i);
putchar(j);
if (i == 56 && j == 57)
break;
putchar(44);
putchar(32);
}
}
}
putchar(10);
return (0);
}


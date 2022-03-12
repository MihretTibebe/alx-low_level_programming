#include <stdio.h>

/**
 * main - start piont
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 48;
while (i <= 57)
{
putchar(i);
if (i == 57)
break;
putchar(44);
putchar(32);
i++;
}
putchar(10);
return (0);
}


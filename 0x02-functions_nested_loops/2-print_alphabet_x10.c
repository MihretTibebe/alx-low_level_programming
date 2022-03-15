#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase letters 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int i;
int ch;
ch = 97;
for (i = 0; i < 10; i++)
{
while (ch <= 122)
{
_putchar(ch);
ch++;
}
_putchar('\n');
ch = 97;
}
}

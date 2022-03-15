#include "main.h"
/**
 * print_alphabet - prints lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int ch;
ch = 97;
while (ch <= 122)
{
_putchar(ch);
ch++;
}
_putchar('\n');
}

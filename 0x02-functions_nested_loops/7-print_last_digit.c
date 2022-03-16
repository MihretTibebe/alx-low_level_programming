#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n : number to be taken
 * Return: last digit
 */
int print_last_digit(int n)
{
int res;
res = n % 10;
_putchar(res + '0');
return (res);
}


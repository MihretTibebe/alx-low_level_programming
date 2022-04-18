#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  returns the sum of all its parameters
 *
 * @n : number of arguments
 * @... : unknown number of arguments
 * Return: integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	return (sum);
}


#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - 
 *
 * @separator : string
 * @n : integer
 * @... : unknown number of argument
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *c;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(ap, char*);

		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
		if (separator == NULL)
			continue;
		if (i == n - 1)
			break;
		printf("%s", separator);
	}

	va_end(ap);

	printf("\n");
}


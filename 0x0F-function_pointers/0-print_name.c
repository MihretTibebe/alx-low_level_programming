#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name : string
 * @f : function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (*f == NULL)
		exit (1);
	(*f)(name);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len -  returns the number of elements in a linked list_t list
 *
 * @h : head pointer
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t n  = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		n++;
		temp = temp->next;
	}

return (n);
}


#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_list - |prints all the elements of a list_t list
 *
 * @h : list
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t n = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}

		else
		{
			printf("[%d] %s\n", temp->len, temp->str != NULL ? temp->str : "(nil)");
		}
			temp = temp->next;
			n++;
	}

	return (n);
}


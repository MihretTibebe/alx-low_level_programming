#include <stdlib.h>
#include <string.h>
#include "lists.h"

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * print_list - |prints all the elements of a list_t list
 *
 * @h : list
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	int i;

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s", 0, "nill");
		printf("[%d] %s", h->len, h->str);
			h++;
	}
	
}


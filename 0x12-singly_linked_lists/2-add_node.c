#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head : head of the list
 * @str : string
 * Return: list_t*
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	new->str = strdup(str);

	while (str != NULL)
	{
		n++;
	}

	new->len = n;
	new->next = *head;
	*head = new;

	return (new);
}


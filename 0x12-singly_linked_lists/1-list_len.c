#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - show the number of elemens of a list
 * @h: a linked list
 *
 * Return: the number of elements of list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}

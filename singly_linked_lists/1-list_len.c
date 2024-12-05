#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * list_len - Returns the number of elements in a linked list
 * @h: The head of the linked list
 *
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
	int n_noeud = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		n_noeud++;
		current = current->next;
	}
	return (n_noeud);
}


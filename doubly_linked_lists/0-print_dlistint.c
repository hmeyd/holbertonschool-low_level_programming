
#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of a linked list
 * @h: The head of the linked list
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int n_noeud = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		n_noeud++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (n_noeud);
}

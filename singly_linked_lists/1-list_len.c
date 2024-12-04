#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_list - check the code
 *@h:c'est list de donnés
 * Return: Always 0.
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

#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_dnodeint_at_index - Adds a new node at the end of a linked list
 * @head: A pointer to the head of the list
 * @index: The string to be added to the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int nem = 0;
	dlistint_t *current = head;

	while (current)
	{
		if (nem == index)
			return (current);
		nem++;
		current = current->next;
	}
	return (NULL);
}

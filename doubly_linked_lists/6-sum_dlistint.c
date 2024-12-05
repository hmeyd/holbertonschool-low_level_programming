#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * sum_dlistint - Adds a new node at the end of a linked list
 * @head: A pointer to the head of the list
 *
 * Return: The address of the new node, or NULL if it failed
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;
	dlistint_t *current = head;

	while (current)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}

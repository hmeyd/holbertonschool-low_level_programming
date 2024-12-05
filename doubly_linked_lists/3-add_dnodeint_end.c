#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a linked list
 * @head: A pointer to the head of the list
 * @n: The string to be added to the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	new_node->n = n;
	temp->next = new_node;
	new_node->next = NULL;

	return (new_node);
}

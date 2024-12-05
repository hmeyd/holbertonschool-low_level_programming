#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - Frees a linked list
 * @head: The head of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

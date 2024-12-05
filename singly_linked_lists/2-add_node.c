#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node - check the code
 *@str:c'est list de donnés
 *@head: the node
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int new_len = 0;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	while (str[new_len] != '\0')
	{
		new_len++;
	}
	new_node->len = new_len;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

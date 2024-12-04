#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_list - Prints all the elements of a linked list
 * @h: The head of the linked list
 * 
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
    int n_noeud = 0;
    const list_t *current = h;

    while (current != NULL)
    {
        n_noeud++;
        if (current->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%d] %s\n", current->len, current->str);
        }
        current = current->next;
    }
    return (n_noeud);
}


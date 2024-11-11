#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - cree un tableau
 * @size: le dimenssion du tableau
 * @c: le chacteur
 * Return: arr
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;
if (size == 0)
{
	return (0);
}
arr = malloc(size * sizeof(char));
if (arr == NULL)
{
	printf("Échec de l'allocation de mémoire\n");
        return (1);
}
for (i = 0; i < size; i++)
{
	arr[i] = c;
} 
return (arr);
}

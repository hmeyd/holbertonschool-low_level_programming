#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - fonction qui diplique
 * @str: le chaine de caractaire à dipliquer
 * Return: le chaine de caractaire
 */
char *_strdup(char *str)
{
	int size = 0, i;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size] != '\0')
	{
		size = size + 1;
	}
	arr = malloc((size) * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = str[i];
	}
	arr[size + 1] = '\0';
	return (arr);
}


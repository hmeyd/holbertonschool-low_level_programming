#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - fonction qui diplique
 * @s1: 1er le chaine de caractaire à concatiner
 * @s2: 2eme chaine de caractaire à concatiner
 * Return: le chaine de caractaire concatiner
 */
char *str_concat(char *s1, char *s2)
{
	int size = 0, size1 = 0, i, j;
	char *arr;

	if (*s1 == '\0' && *s2 == '\0')
	{
		return ('\0');
	}

	while (s1[size] != '\0')
	{
		size = size + 1;
	}
	while (s1[size1] != '\0')
	{
		size1 = size1 + 1;
	}
	arr = (char *)malloc((size + size1 + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	else if (size == 0)
		arr = s2;
	else if (size1 == 0)
		arr = s1;
	else 
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = s1[i];
		}
		for (j = 0; j <= size1; j++)
		{
			arr[j + size] = s2[j];
		}
	}
	arr[size  + size1 + 1] = '\0';
	return (arr);
}

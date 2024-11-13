#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - fonction qui diplique
 * @s1: 1er le chaine de caractaire à concatiner
 * @s2: 2eme chaine de caractaire à concatiner
 * Return: le chaine de caractaire concatiner
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0, size2 = 0, i, j;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	if (n > size2)
	{
		arr = (char *)malloc((size1 + size2 + 1) * sizeof(char));
		if (arr == NULL)
			return (NULL);
		for (i = 0; i < size1; i++)
			arr[i] = s1[i];
		for (j = 0; j < size2; j++)
			arr[i + j] = s2[j];
	}
	else
	{
		arr = (char *)malloc((size1 + n + 1) * sizeof(char));
		if (arr == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size1; i++)
			arr[i] = s1[i];
		for (j = 0; j < n; j++)
			arr[i + j] = s2[j];
		arr[i + j] = '\0';
	}
	return (arr);
}

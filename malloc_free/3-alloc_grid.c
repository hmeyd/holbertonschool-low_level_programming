#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - fonction qui diplique
 * @s1: 1er le chaine de caractaire à concatiner
 * @s2: 2eme chaine de caractaire à concatiner
 * Return: le chaine de caractaire concatiner
 */
int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof (int *));
	if (arr == NULL)
		return (0);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int *));
		if (arr[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
return (arr);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * array_range - allouer un tableau
 * @min: la 1er dimenssion
 * @max: la 2eme dimention
 *
 * Return: arr
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc((max - min) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < max - min; i++)
		arr[i] = min + i;
	return (arr);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - checker les alloucation
 * @b: la dimenssion
 *
 * Return: arr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;
	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	return (arr);
}
